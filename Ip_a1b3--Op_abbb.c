/*Write a program to give the following output for the given input 
Eg 1: Input: a1b10
 Output: abbbbbbbbbb
Eg: 2: Input: b3c6d15
 Output: bbbccccccddddddddddddddd
The number varies from 1 to 99.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100],ch=0;
	int count=0,i,j;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			if(ch!=0)
			{
				for(j=0;j<count;j++)
					printf("%c",ch);
				count=0;
			}
			ch=str[i];
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			count=(count*10)+str[i]-'0';
		}
	}
	for(j=0;j<count;j++)
			printf("%c",ch);
	return 0;	
}
