//Write a C program to add two integers a and b read through the keyboard. Display the result using third variable sum
#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int a,b,sum;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("the sum of the two numbers is %d ",sum);
    return 0;
}
