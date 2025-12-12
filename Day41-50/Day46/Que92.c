//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[26] = {0};  // to count frequency of each lowercase letter
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) { // first time a letter repeats
                printf("Repeating alphabet:\n%c\n", str[i]);
                return 0;
            }
        }
    }

    printf("Output:\nNo repeating lowercase alphabet found.\n");
    return 0;
}