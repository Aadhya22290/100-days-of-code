/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/

#include <stdio.h>
int main()
    {
        int ra,ca,rb,cb,r,c,sum,uw;
        
        printf("Enter order of A matrix = ");
         scanf("%d%d",&ra,&ca);
        printf("Enter order of B matrix = ");
         scanf("%d%d",&rb,&cb);
        
        if(ca!=rb)
            {
                printf("Invalid Order");
                return 0;
            }
        
        int A[ra][ca],B[rb][cb],AB[ra][cb];
        
        for(r=0;r<ra;r++)
            {
                for(c=0;c<ca;c++)
                    {
                        printf("Enter value of A[%d][%d] = ",r,c);
                         scanf("%d",&A[r][c]);
                    }
            }
        for(r=0;r<rb;r++)
            {
                for(c=0;c<cb;c++)
                    {
                        printf("Enter value of B[%d][%d] = ",r,c);
                         scanf("%d",&B[r][c]);
                    }
            }
        
        for(r=0;r<ra;r++)
            {
                for(c=0;c<cb;c++)
                    {
                        sum=0;
                        for(uw=0;uw<ca;uw++)
                            {
                                sum=sum+A[r][uw]*B[uw][c];
                            }
                        AB[r][c]=sum;
                    }
            }
        
        printf("\n Multiplied Matrix :\n");
        for(r=0;r<ra;r++)
            {
                for(c=0;c<cb;c++)
                    {
                        printf("%d ",AB[r][c]);
                    }
                printf("\n");
            }
    }