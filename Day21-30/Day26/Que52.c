/*Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>
void a() {
    printf("*\n");
}
void b() {
    int q=0;
    for (q=0; q<3; q++) {
    printf("*\n");
    }
}
void c() {
    int w=0;
    for (w=0; w<5; w++) {
    printf("*\n");
    }
}
int main() {
    int i=0, n;
    printf("Enter no of repetations : ");
    scanf("%d", &n );
    for (i=0; i<n; i++){
    // 1 *
    a();
    printf("\n");
    // C3 *
    b();
    printf("\n");
    // 5 *
    c();
    printf("\n");
    // 3 *
    b();
    printf("\n"); 
    // 1 *
    a();
    printf(" \n");
    }
    return 0; 
}