//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp;
    int start = 0, end, i, j;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i <= strlen(str); i++) {
    
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // Reverse current word
            for (j = start; j < end; j++, end--) {
                temp = str[j];
                str[j] = str[end];
                str[end] = temp;
            }

            start = i + 1; //next word starts
        }
    }

    printf("Output:\n%s\n", str);
    return 0;
}