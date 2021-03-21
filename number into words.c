/*To output the number in words (0-999)
Input: 234
Output: Two hundred and Thirty Four*/

#include<stdio.h>
int main()
{
	int num,i=0,temp,len=0,x;
	char ones[20][20]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char tens[10][20]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	char tenpowers[10][20]={"","ten","hundred","thousand"};
	printf("Enter the number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("zero");
		return 0;
	}
	temp=num;
	while(temp>0)
	{
		len++;
		temp=temp/10;
	}
	while(i<len)
	{
		if(num>=0 && num<10)
		{
			printf("%s ",ones[num]);
		}
		else if(num>=10 && num<=19)
		{
			printf("%s ",ones[num]);
			break;
		}
		else if(num>=20 && num<=99)
		{
			x=num/10;
			num=num%10;
			printf("%s ",tens[x]);
		}
		else if(num>=100 && num<=999)
		{
			x=num/100;
			num=num%100;
			printf("%s %s ",ones[x],tenpowers[2]);
			if(num!=0)
				printf("and ");
		}
		else if(num>=1000 && num<=9999)
		{
			x=num/1000;
			num=num%1000;
			printf("%s %s ",ones[x],tenpowers[3]);
			if(num!=0)
				printf("and ");
		}
		else
			printf("");
		i++;
	}
	return 0;
}
