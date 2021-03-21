/*To find the odd numbers in between the range.
Input:
2
15
Output:
3,5,7,9,11,13*/
#include<stdio.h>
int main()
{
	int i,start,end;
	scanf("%d%d",&start,&end);
	for(i=start+1;i<end;i++)
	{
		if(i%2!=0)
			printf("%d ",i);
	}
	return 0;
}
