/*Implement a function that accepts two integers arrays 'arr1' and 'arr2' of sizes n and m respectively as its argument to find and return the sum of all uncommon elements in two arrays(elements which are present in only one of the array). 
Return -1 if both arrays are null. 
If one of the arrays is null then return the sum of all elements of the other array.*/

#include<stdio.h>
int SumOfElements(int arr1[], int arr2[],int n,int m)
{
  int i=0,j=0,sum=0,count;
  if(m==0 && n==0)
  	return -1;
  if(n==0)
  {
  	for(i=0;i<m;i++)
  	{
  		sum=sum+arr2[i];
	}
	return sum;
  }
  for(i=0;i<n;i++)
  {
	count=0;
	for(j=0;j<m;j++)
	{
		if(arr1[i]==arr2[j])
		   break;
		else
			count++;
	}
	if(count==m)
	 	sum=sum+arr1[i];
 } 	
 return(sum);
}
int main()
{
  int arr1[50],arr2[50],n,m,i,res;
  printf("enter no of elements of first and second array: ");
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&arr2[i]);
  }
 res=SumOfElements(arr1,arr2,n,m);
 printf("The sum is %d",res);
  return 0;
}
