#include<stdio.h>
int main()
{
	int n,r=0;
	printf("\n\n\t\tPlease enter any number : ");
	scanf(" %d",&n);
	while(n!=0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	printf("\n\n\t\tThe reversed number is : %d\n\n\n",r);
	return 0;
}
