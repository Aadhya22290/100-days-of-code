//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a name:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    printf("Output:\n");

    // Print first character as first initial
    if (str[0] != ' ')
        printf("%c.", toupper(str[0]));

    // Loop through the string
    for (int i = 0; i < strlen(str); i++) {
        // If space found, next character is an initial
        if (str[i] == ' ' && str[i + 1] != '\0' && str[i + 1] != ' ')
            printf("%c.", toupper(str[i + 1]));
    }

    printf("\n");
    return 0;
}