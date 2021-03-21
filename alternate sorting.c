/*1) Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum. 
 Eg.) Input : {1, 2, 3, 4, 5, 6, 7}
 Output : {7, 1, 6, 2, 5, 3, 4}*/

#include<stdio.h>
int main()
{
	int i,arr[100],n,j,k,res[100];
	printf("Enter no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				arr[i]=arr[i]^arr[j];
				arr[j]=arr[i]^arr[j];
				arr[i]=arr[i]^arr[j];
			}
		}
	}
	i=0,j=n-1,k=0;
	while(i<=n/2)
	{
		res[k++]=arr[i++];
		res[k++]=arr[j--];
	}
	for(i=0;i<n;i++)
		printf("%d ",res[i]);
	return 0;

}
