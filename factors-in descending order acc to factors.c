/*To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.
Input:
Given array : 8, 2, 3, 12, 16
Output:
12, 16, 8, 2, 3*/

#include<stdio.h>
int main()
{
	int i,arr[100],n,count[50]={0},j;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		j=1;
		while(j<=arr[i])
		{
			if(arr[i]%j==0)
				count[i]++;
			j++;
		}	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(count[i]<count[j])
			{
				count[i]=count[i]^count[j];
				count[j]=count[i]^count[j];
				count[i]=count[i]^count[j];
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
	
	
}

