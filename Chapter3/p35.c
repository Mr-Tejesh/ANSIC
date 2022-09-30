#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,digs=0,b,c;
	printf("\n\n\t\tPlease enter a number : ");
	scanf(" %d",&a);
	b=a;
	while(a!=0)
	{
		++digs;
		a=a/10;
	}
	printf("\n\n\t\tTotal number of digits : %d\n\n",digs);
	for(i=1;i<=digs;i++)
	{
		printf("\n\t\t%d \n",b);
		c = pow(10,digs-i);
		b = b%c;
	}
	printf("\n");
	return 0;
}
