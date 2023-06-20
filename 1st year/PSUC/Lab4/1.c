//Generate the multiplication table for ‘n’ numbers up to ‘k’ terms (using nested for loops).
//  [ Hint: 1 2 3 4 5 .... k
//  2 4 6 8 10 ....2*k
//  .........................
//  n.................. n*k ]

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,n,k;
    printf("Enter the value of n and k\n");
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=k;j++)
        {
            a=i*j;
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}
