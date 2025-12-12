//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening file in read mode
    fp = fopen(filename, "r");

    // If file doesn't exist
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    // If file exists
    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and display file content character by character
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}