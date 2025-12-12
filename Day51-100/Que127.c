
//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt!\n");
        return 1;
    }

    // Open output file for writing
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot create output.txt!\n");
        fclose(fin);
        return 1;
    }

    // Read each character, convert to uppercase, and write to output file
    while ((ch = fgetc(fin)) != EOF) {
        ch = toupper(ch);      // convert lowercase to uppercase
        fputc(ch, fout);
    }

    printf("File converted successfully. Output saved to output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
