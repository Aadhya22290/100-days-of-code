//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int n,r,w=0;
    printf("Enter number: ");
    scanf("%d",&n);
    int o=n;
    while(o!=0){
        r=o%10;
        w+=r*r*r;
        o/=10;
    }
    if(n==w){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is not Armstrong");
    }
}