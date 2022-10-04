#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("\n\n\t\tPlease enter any 4 real numbers : ");
	scanf(" %f %f %f %f",&a,&b,&c,&d);
	printf("\n\n\t\tThe original numbers are : %.2f, %.2f, %.2f, and %.2f\n\n\t\tThe rounded numbers are  : %d, %d, %d and %d\n\n\n",a,b,c,d,(int)a,(int)b,(int)c,(int)d);
	return 0;
}
