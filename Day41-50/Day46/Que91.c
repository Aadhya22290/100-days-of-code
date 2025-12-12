//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i=0,j=0;
    char ch;
    printf ("Enter string\n");
    fgets (str, sizeof(str), stdin);
     while (str[i] != '\0') {
        char ch = str[i];
        // Check if not vowel
        if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            str[j++] = str[i];  // copy non-vowel
        }
        i++;
    }
    str[j] = '\0';  // terminate string

    printf("String without vowels: %s\n", str);
    return 0;
   
}