//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main() {
    int n;
    float sum = 0.00;
    printf("Enter numbers of terms: ");
    scanf("%d",&n);
    if(n==1)    
    {
        sum=1.00;
        printf("%.2f",sum);
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        sum=sum+(2*i-1)/(float) (2*i);
    }
    printf("%.2f",sum+1); // Adding 1 for the first term
    return 0;
}