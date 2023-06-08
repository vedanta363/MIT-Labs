//Find the sum of all the elements of an 1D double array of size n using a function Add. The values in the array are read from keyboard.
#include <stdio.h>
#include <stdlib.h>

int i=0;
void sumOfArray(int arr[], int n)
{
	int sum=0;
	for(i=0; i<n; i++)
	{
	  sum=sum+arr[i];
	}
	printf("Sum = %d \n", sum);
}
int main()
{
	int i=0;
	int n=0,num=0;
	int sum=0;
    printf("Enter number of elements : ");
    scanf("%d", &num);
    int arr[100];
    printf("Enter elements of array :\n");
	for(i=0;i<num;i++)
	{
	  scanf("%d", &arr[i]);
	}
	sumOfArray(arr,num);
}
