//Find whether a given matrix is symmetric or not. [Hint: A = A^T]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,f=0;
    printf("Enter the dimension of square matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i][j]!=a[j][i])
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
        printf("Symmetric matrix");
    else
        printf("Non Symmetric matrix");
    return 0;
}
