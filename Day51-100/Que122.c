//Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

/*
Sample Test Cases:
Input 1:
File: info.txt (Content: Name: Rahul\nAge: 23)
Output 1:
Name: Rahul
Age: 23

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    // Open the file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read and print each line until end of file
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}