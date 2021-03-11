/*binary to decimal conversion */

#include<stdio.h>
#include<math.h>
void main()
{
	int i=0,x;
	long int n,res=0;
	printf("Enter the binary number: ");
	scanf("%ld",&n);
	while(n!=0)
	{
		x=n%10;
		n=n/10;
		res=res+(x*pow(2,i));
		i++;
	}
	printf("%ld ",res);
}
