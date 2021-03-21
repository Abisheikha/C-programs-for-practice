/*Given two numbers a and b both < 200 we have to find the square numbers which lie between a and b(inclusive) 
eg) i/p a = 20;b = 100;
 o/p 25,36,49,64,81,100*/

#include<stdio.h>
int main()
{
	int a,b,i=1;
	printf("Enter range a and b: ");
	scanf("%d%d",&a,&b);
	while(i*i<=b)
	{
		while(i*i>a && i*i<=b)
		{
			printf("%d ",i*i);
			i++;
		}
		i++;
	}
	return 0;
}
