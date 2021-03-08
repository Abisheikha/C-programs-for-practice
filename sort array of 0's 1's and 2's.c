/* Sort an aarray of 0's and 1's */

#include<stdio.h>
void main()
{
	int arr[100],n,i,mid=0,pivot=1,start=0,end,temp;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	end=n-1;
	while(mid<=end)
	{
		if(arr[mid]<pivot)
		{
			temp=arr[mid];
			arr[mid]=arr[start];
			arr[start]=temp;
			start++;
			end--;
		}
		else if(arr[mid]>pivot)
		{
			temp=arr[mid];
			arr[mid]=arr[end];
			arr[end]=temp;
			end--;
		}
		else
		{
			++mid;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

