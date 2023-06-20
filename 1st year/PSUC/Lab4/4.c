//  Check whether a given number is perfect or not.
//  [Hint: Sum of all positive divisors of a given number excluding the given number is
//  equal to the number] Ex: 28 = 1+ 2 + 4 + 7 + 14 = 28 is a perfect number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
        printf("%d is a perfect number",n);
    else
        printf("%d is not a perfect number",n);
    return 0;
}
