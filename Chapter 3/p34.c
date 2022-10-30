#include<stdio.h>
int main()
{
	float a,b;
	printf("\n\n\t\tPlease enter the length and width of the rectangle : ");
	scanf(" %f %f",&a,&b);
	printf("\n\n\t\tThe area of rectangle is : %.2f\n\t\tThe perimeter of rectangle is : %.2f",a*b,2*(a+b));
	return 0;
}
