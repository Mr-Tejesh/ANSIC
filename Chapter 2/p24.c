#include<stdio.h>
int main()
{
	float a,b;
	printf("\n\n\t\tPlease enter two decimal numbers : ");
	scanf(" %f %f",&a,&b);
	printf("\n\n\t\tThe numbers are %.3f and %.3f\n\t\tThe result of division is %.3f\n\n",a,b,a/b);
	return 0;
}
