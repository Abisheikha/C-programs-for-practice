/*8.Write a program to move all the zeros to the beginning. Input {1,2,3,0,0,0,4,5} Output {0,0,0,1,2,3,4,5}*/

#include<stdio.h>
void main()
{
	int str[100],i,n,count=0,res[100];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&str[i]);
	}
	for(i=0;i<n;i++)
	{
		if(str[i]==0)
			res[count++]=str[i];
	}
	for(i=0;i<n;i++)
	{
		if(str[i]!=0)
			res[count++]=str[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",res[i]);
	}
}
