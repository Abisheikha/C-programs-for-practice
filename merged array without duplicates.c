/*Given two sorted arrays output a merged array without duplicates.
Array1: [1, 2, 3, 6, 9]
Array2: [2, 4, 5, 10]
Merged Array: [1, 2, 3, 4, 5, 6, 9, 10]*/

#include<stdio.h>
int main()
{
	int arr1[50],arr2[50],n,m,i,count[100]={0},max=0;
  	printf("enter no of elements of first and second array: ");
  	scanf("%d%d",&n,&m);
  	for(i=0;i<n;i++)
  	{
    	scanf("%d",&arr1[i]);
    	count[arr1[i]]++;
    	if(max<arr1[i])
    		max=arr1[i];
	}
  	for(i=0;i<m;i++)
	{
    	scanf("%d",&arr2[i]);
    	count[arr2[i]]++;
    	if(max<arr2[i])
    		max=arr2[i];
	}
	printf("The merged array is:\n");
	for(i=0;i<=max;i++)
  	{
  		if(count[i]!=0)
  			printf("%d ",i);
  	}
  	return 0;
}
