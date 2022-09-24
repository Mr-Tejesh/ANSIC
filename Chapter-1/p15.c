#define pi 3.14
#include<stdio.h>
int main()
{
	float r,area;
	printf("Please enter the radius of the circle : ");
	scanf(" %f",&r);
	area=pi*r*r;
	printf("The radius of the circle is : %.2f",area);
	return 0;
}
