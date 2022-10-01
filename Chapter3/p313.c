
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\n\n\t\tPlease enter any 3 numbers : ");
	scanf(" %d %d %d",&a,&b,&c);
	/*
	while(a>b&&a>c)
	{
		printf("\n\n\t\tThe largest number is : %d\n\n",a);
		break;
	}
	while(b>a&&b>c)
	{
		printf("\n\n\t\tThe largest number is : %d\n\n",b);
		break;
	}
	while(c>a&&c>b)
	{
		printf("\n\n\t\tThe largest number is : %d\n\n",c);
		break;
	}*/
	max = (a>b?a:b)>c?(a>b?a:b):c;
	printf("\n\n\t\tThe largest number is : %d\n\n",max);
	return 0;
}
