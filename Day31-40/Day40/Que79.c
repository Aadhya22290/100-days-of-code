//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter rows and cols: ");
    scanf("%d %d",&n,&m);
    
    int a[n][m];
    
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Diagonal Traversal: ");
    
    // first half (including first row)
    for(int col=0;col<m;col++)
    {
        i=0;
        j=col;
        while(i<n && j>=0)
        {
            printf("%d ",a[i][j]);
            i++;
            j--;
        }
    }
    
    // second half (starting from row=1)
    for(int row=1;row<n;row++)
    {
        i=row;
        j=m-1;
        while(i<n && j>=0)
        {
            printf("%d ",a[i][j]);
            i++;
            j--;
        }
    }
    
    printf("\n");
    return 0;
}