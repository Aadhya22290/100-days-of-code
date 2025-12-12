//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    float sum=0.00;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(2*i)/(float)(4*i-1);
    }
    printf("%.2f",sum);
    return 0;
}