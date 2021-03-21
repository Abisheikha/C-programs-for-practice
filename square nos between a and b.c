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
