/*Find whether two strings are an anagram of each other.*/

#include<stdio.h>
#include<string.h>
void main()
{
	int len1,len2,i,str1[50]={0},str2[50]={0};
	char a[100],b[100];
	printf("Enter two strings: \n");
	gets(a);
	gets(b);
	len1=strlen(a);
	len2=strlen(b);
	for(i=0;i<len1;i++)
	{
		str1[a[i]-'a']++;
		str2[b[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{ 
		if(str1[i]!=str2[i])
			break;
	}
	if(i>=25)
		printf("The given strings %s and %s are anagrams",a,b);
	else
		printf("The given strings %s and %s are not anagrams. ",a,b);
}
