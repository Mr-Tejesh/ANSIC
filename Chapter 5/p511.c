#include<math.h>
#include<stdio.h>
int main()
{
	int a,b,c,A,B;
	printf("\n\n\t\tPlease enter any 3 integers : ");
	scanf("%d %d %d",&a,&b,&c);
	A=pow(a,2)+pow(b,2);
	B=pow(c,2);
	if(A==B)
	{
		printf("\n\n\t\tThe numbers entered are sides of right angled triangle\n\n");
	}
	else
	{
		printf("\n\n\t\tThe numbers entered are not sides of right angled triangle\n\n");
	}
	return 0;
}
