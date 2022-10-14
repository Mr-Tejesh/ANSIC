#include<math.h>
#include<stdio.h>
int main()
{
	double x;
	char T;double sine,cose,tang;
	printf("\n\n\t\tPlease enter the value of x : ");
	scanf(" %lf",&x);
	printf("\n\n\t\tPlease enter the function symbol : ");
	scanf(" %c",&T);
//	printf("%.2lf     %c\n\n",x,T);
	if(T=='s'||T=='S')
	{
		sine=sin(x);
		printf("\n\n\t\tThe result is : %.2lf",sine);
	}
	else if(T=='c'||T=='C')
	{
		cose=cos(x);
		printf("\n\n\t\tThe result is : %.2lf",cose);
	}
	else if(T=='t'||T=='T')
	{
		tang=tan(x);
		printf("\n\n\t\tThe result is : %.2lf",tang);
	}
	else{
		printf("\n\n\t\tPlease enter valid value of symbol");
	}
	printf("\n\n\n");
	return 0;
}
