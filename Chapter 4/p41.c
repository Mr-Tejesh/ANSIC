#include<stdio.h>
int main()
{
	char c[14];
	int i;
	printf("\n\n\t\tPlease enter the string  : ");
	for(i=0;i<14;i++)
	{
		c[i]=getchar();
	}
	printf("\n\n\t\t");
	for(i=0;i<14;i++)
	{
		if(c[i]=='P')
		{
			printf(" ");
		}
		printf("%c",c[i]);
	}
	printf("\n\n\t\t");
	for(i=0;i<14;i++)
	{
		if(c[i]=='P')
		{
			printf("\n\t\t");
		}
		printf("%c",c[i]);
	}
	printf("\n\n\t\tW.P.\n\n");
	return 0;
}
