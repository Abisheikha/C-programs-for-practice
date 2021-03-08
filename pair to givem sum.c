/* you have an array of n elements and a sum.Check if any 2 elements in the array sum to given sum */

#include<stdio.h>
void main()
{
	int arr[100],n,sum,temp,i,j;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the sum: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		temp=abs(sum-arr[i]);
		for(j=0;j<n;j++)
		{
			if(arr[j]==temp)
			{
				printf("%d,%d\n",arr[i],arr[j]);
				return;
			}
		}
	}	
	printf("The pair is not found ");
}
