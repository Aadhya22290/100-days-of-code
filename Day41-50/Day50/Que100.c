//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);

    printf("Output:\n");

    // Generate all substrings
    for (int i = 0; i < len; i++) {       // starting index
        for (int j = i; j < len; j++) {   // ending index
            for (int k = i; k <= j; k++)  // print substring from i to j
                printf("%c", str[k]);
            printf(",");                   // separate substrings with comma
        }
    }

    printf("\n");
    return 0;
}