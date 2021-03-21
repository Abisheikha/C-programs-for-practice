/*Given a array with n elements print the number of occurrences of that number each number in that array. 
The order of number doesn’t matter. You can reorder the elements.
Example : [2,1,3,2,2,5,8,9,8]
Output:
2-3
1-1
3-1
5-1
8-2
9-1*/

#include<stdio.h>
int main()
{
	int i,arr[100],n,j,max=0,count[100]={0};
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(max<arr[i])
			max=arr[i];
	}
	for(i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	printf("Output:\n");
	for(i=0;i<=max;i++)
	{
		if(count[i]!=0)
		{
			printf("%d - %d\n",i,count[i]);
		}
	}
	return 0;
}
