//Write a function Reverse to reverse the elements of an integer array using pointer. Access the elements of the array using dereference operator. Read the values from the keyboard in main function. Display the result in the main function.

#include <stdio.h>

int i=0;
void reverse(int arr[], int num)
{
    int rev[100];
    for (i=0;i<num;i++)
    {
        rev[num-i]=arr[i];
    }
}

int main()
{
    int i=0,n=0,num=0;
    printf("Enter the number of elements");
    scanf("%d",&num);
    int arr[100];
    printf("Enter elements of array :\n");
	for(i=0;i<num;i++)
	{
	  scanf("%d", &arr[i]);
	}
    reverse(arr,num);
}
