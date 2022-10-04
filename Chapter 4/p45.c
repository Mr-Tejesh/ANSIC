#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,digs[2],mul[2],sum=0;
	printf("\n\n\t\tPlease enter any two integers : ");
	scanf(" %d %d",&a,&b);
	printf("\n\n\t\t\t\t\t%d\n\t\t\t\t   *    %d\n\t\t\t\t  ----------",a,b);
	for(int i=0;i<2;i++)
	{
		digs[i]=b%10;
		b=b/10;
		mul[i]=digs[i]*a;
		sum = sum+mul[i]*pow(10,i);
	}
	printf("\n\t\t\t%d * %d is      %d",digs[0],a,mul[0]);
	printf("\n\t\t\t%d * %d is     %d\n\t\t\t\t  ----------",digs[1],a,mul[1]);
	printf("\n\t\t\tAdd them      %d\n\t\t\t\t  ----------\n\n\n",sum);
	return 0;
}
