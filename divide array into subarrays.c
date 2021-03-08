/*Given an array A, divide it into two arrays say B and C, such that the sum of elements in array B is greater than or equal to the sum of elements in array C 
and array B should have a minimum number of elements.*/

#include<stdio.h>
void main()
{
	int n,arr[100],leftSum=0,rightSum,i,j,x,count=0;
	printf("Enter number of arrray elements: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		leftSum+=arr[i];
		rightSum=0;
		count=0;
		for(j=i+1;j<n;j++)
		{
			rightSum+=arr[j];
			count++;
		}
		if(leftSum>=rightSum)
		{
			if(i<count)
			{
			x=i+1;
			break;
			}
			else
			{
				printf("division of array is not possible.");
				return;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(x==i)
			printf("\n");
		printf("%d ",arr[i]);
	}
}
