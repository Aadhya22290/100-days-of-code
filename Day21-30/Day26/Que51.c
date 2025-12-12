/*Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>
int main() {
    int i,j,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (j=1; j<=n; j++) {
            if (j<i) {
                printf(" ");
            } else {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}