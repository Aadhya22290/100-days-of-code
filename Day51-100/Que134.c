//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[10];
    scanf("%s", input);

    enum Status st;

    if (strcmp(input, "SUCCESS") == 0) st = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) st = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) st = TIMEOUT;
    else {
        printf("Invalid input");
        return 0;
    }

    switch (st) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}