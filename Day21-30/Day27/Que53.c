/*Write a program to print the following pattern using nested loops:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter no of rows : ");
    scanf("%d", &n );
    
    //upper half
    for (i=1; i<=n; i++) {
        for (j=1; j<=(2*i-1); j++) { //2*i-1 is used to print odd number of stars
            printf("*");
        }
        printf("\n");
    }

    //lower half
    for (i=n-1; i>=1; i--) {
        for (j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}