/*Implement atoi to convert a string to an integer.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int int_val;
	gets(str);
	int_val = atoi(str);
	printf("The integer value %d",int_val);
}
