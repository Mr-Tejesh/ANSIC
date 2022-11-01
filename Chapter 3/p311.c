#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("\n\n\t\tPlease enter any four digit number : ");
	scanf(" %d",&a);
	while(a!=0)
	{
		sum+=a%10;
		a=a/10;
	}
	printf("\n\n\t\tSum of the digits of the number is : %d\n\n\n",sum);
	return 0;
}
