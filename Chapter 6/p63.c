#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("\n\n\t\tPlease enter an integer : ");
	scanf(" %d",&n);
	while(n!=0)
	{
		sum =sum + n%10;
		n=n/10;
	}
	printf("\n\n\t\tThe sum of digits of integer entered is : %d\n\n",sum);
	return 0;
}
