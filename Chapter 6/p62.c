#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("\n\n\t\tPlease enter an integer : ");
	scanf(" %d",&n);
	while(n!=0)
	{
		fact=fact*n;
		n-=1;
	}
	printf("\n\n\t\tFactorial of the number is : %d\n\n",fact);
	return 0;
}
