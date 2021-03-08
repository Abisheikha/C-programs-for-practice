/* you have an array of n elements and a product.Check if any 2 elements in the array product to given product */

#include<stdio.h>
void main()
{
	int n,i,j;
	float temp , arr[100],product;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&arr[i]);
	}
	printf("Enter the product: ");
	scanf("%f",&product);
	for(i=0;i<n;i++)
	{
		temp=product/arr[i];
		for(j=0;j<n;j++)
		{
			if(arr[j]==temp)
			{
				printf("%.0f,%.0f\n",arr[i],arr[j]);
				return;
			}
		}
	}	
	printf("The pair is not found ");
}
