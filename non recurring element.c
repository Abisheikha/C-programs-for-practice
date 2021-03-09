// return the index of first non recurring element

#include<stdio.h>
void main()
{
	int i,a[100],j,n,count;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(i!=j && a[i]==a[j])
				count++;	
		}
	if(count==0)
	{
		printf("The first non recurring element is %d found in index %d",a[i],i);
		break;
	}
	}
	
}
