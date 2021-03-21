/*Given an array of distinct elements. The task is to find triplets in the array whose sum is 0*/

#include<stdio.h>
void sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
		}
	}
}
void triplets(int arr[],int n)
{
	int i,start,end;
	for(i=0;i<n;i++)
	{
		start=i+1;
		end=n-1;
		if(i>0 && arr[i]==arr[i-1])
				continue;
		while(start<end)
		{
			if(arr[i]+arr[start]+arr[end]==0)
			{
				printf("The triplet is %d,%d,%d\n",arr[i],arr[start],arr[end]);
				start++;
				end--;
				
			}
			else if(arr[i]+arr[start]+arr[end]<0)
			{
				start++;
			}
			else if(arr[i]+arr[start]+arr[end]>0)
			{
				end--;
			}
		}	
	}
}
int main()
{
  	int arr[100],n,i;
  	printf("enter no of elements of first and second array: ");
  	scanf("%d",&n);
  	for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
	sort(arr,n);
	triplets(arr,n);
	return 0;
}

