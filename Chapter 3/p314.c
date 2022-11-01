#include<stdio.h>
int main()
{
	int m,n,a;
	printf("\n\n\t\tPlease enter any two numbers : ");
	scanf(" %d %d",&m,&n);
	a=(m%n)==0?1:0;
	printf("Is m multiple of n(yes/no) : %d\n\n",a);
	return 0;
}
