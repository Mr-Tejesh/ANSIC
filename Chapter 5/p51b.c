#include<stdio.h>
int main()
{
	int a;
	printf("\n\n\t\tPlease enter any number : ");
	scanf(" %d",&a);
	if(a%2==0)
	{
		printf("\n\n\t\tThe number is even\n\n\n");
	}
	else
	{
		printf("\n\n\t\tThe number is odd\n\n\n");
	}
	return 0;
}
