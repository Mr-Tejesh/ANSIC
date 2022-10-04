#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,A,area;
	printf("\n\t\tPlease enter the values of a, b and c : ");
	scanf(" %f %f %f",&a,&b,&c);
	s=(a+b+c)/2;
	A = s*(s-a)*(s-b)*(s-c);
	area = sqrtf(A);
	printf("\n\n\t\tThe are of a triangle is : %.3f\n\n",area);
	return 0;
}
