//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char monthName[12][4] = {"Jan","Feb","Mar","Apr","May","Jun",
                              "Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy):\n");
    fgets(date, sizeof(date), stdin);

    // Remove newline character if present
    date[strcspn(date, "\n")] = '\0';

    // Split the input string into parts
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strcpy(year, date + 6);

    int m = atoi(month); // convert month to integer (1–12)

    if (m < 1 || m > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("Output:\n%s-%s-%s\n", day, monthName[m - 1], year);

    return 0;
}