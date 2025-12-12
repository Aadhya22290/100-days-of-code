//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Take filename from user
    printf("Enter existing filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Clear input buffer (to avoid skipping user input)
    getchar();  

    // Take text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, fp);

    printf("File updated successfully with appended text.\n");

    fclose(fp);
    return 0;
}