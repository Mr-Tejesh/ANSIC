#include<stdio.h>
int main()
{
	float a,b,c;
	float x;
	printf("Please enter a,b and c values : ");
	scanf(" %f %f %f",&a,&b,&c);
	x = a/(b-c);
	printf("\nThe resultant is : %f\n",x);
	return 0;
}
