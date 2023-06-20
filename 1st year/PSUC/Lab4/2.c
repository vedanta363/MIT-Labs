//Generate Floyd’s triangle using natural numbers for a given limit N. (using for loops)
//[Hint: Floyd’s triangle is a right angled-triangle using the natural numbers]
//  Ex: Input: N = 4
//  Output:
//  1
//  2 3
//  4 5 6
//  7 8 9 10
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,a=1;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
