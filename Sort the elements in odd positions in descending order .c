/*Sort the elements in odd positions in descending order and elements in ascending order*/

#include<stdio.h>
int main()
{
	int i,arr[100],n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i])	;	
	}	
	for(i=0;i<n;i+=2)
	{
		for(j=i+2;j<n;j+=2)
		{
			if(arr[i]<arr[j])
			{
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
			if(arr[i+1]>arr[j+1])
			{
				arr[i+1]=arr[i+1]^arr[j+1];
				arr[j+1]=arr[i+1]^arr[j+1];
				arr[i+1]=arr[i+1]^arr[j+1];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);	
	}	
}
