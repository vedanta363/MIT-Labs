//Reverse a given number and check if it is a palindrome or not. (use while loop).
//[Ex: 1234, reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321]
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,n,rev=0,d;
    printf("Enter any no.\n");
    scanf("%d",&n);
    c=n;
    while(c>0)
    {
        d=c%10;
        rev=rev*10+d;
        c=c/10;
    }
    if(rev==n)
        printf("%d is a palindrome no.",n);
    else
        printf("%d is not a palindrome no.",n);
    return 0;
}
