/* Sort an array based on frequency */

#include<stdio.h>
int main()
{
	long long int arr[100],i,index;
	int j,n,max_val,count[100000]={0};
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		count[arr[i]]++;		
	}
	for(i=0;i<n;i++)
	{
		max_val=count[0];
		index=0;
		 for(j=0;j<n;j++)
		 {
			if(max_val<count[arr[j]])
			{
				max_val=count[arr[j]];
				index=arr[j];
			}
		 }				
		for(i=0;i<max_val;i++)
		{
			printf("%lld ",index);	
		}
	count[index]=0;
	}
return 0;
}
