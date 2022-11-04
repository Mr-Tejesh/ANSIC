#include<stdio.h>
#define max 100
int main()
{
	char a[max],occr;
	int count=0,i=0;
	printf("\n\n\t\tPlease enter any string : ");
	fgets(a, sizeof(a), stdin);
	printf("\n\n\t\tPlease enter the character whose occurence need to be checked : ");
	scanf(" %c",&occr);
	while(a[i]!='\0')
	{
		if(a[i]==occr)
		{
			count++;
		}i++;
	}
	printf("\n\n\t\tThe character %c occured %d times in the string\n\n\n",occr,count);
	return 0;
}
