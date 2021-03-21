/*Write function to find multipication of 2 numbers using + operator You must use minimu possible iterations. 
Input: 3 , 4
Output 12 */

#include<stdio.h>
int main()
{
	int i=0,x,y,res=0;
	printf("Enter numbers: ");
	scanf("%d%d",&x,&y);
	if(x>y)
	{
		x=x^y;
		y=x^y;
		x=x^y;
	}
	while(i<x)
	{
		res+=y;
		i++;
	}
	printf("Product is %d",res);
	return 0;
}
