#include<math.h>
#include<stdio.h>
int main()
{
	float P,d;
	int c,n,i;
	printf("\n\n\t\tPlease enter the original cost of the book : ");
	scanf(" %d",&c);
	printf("\n\n\t\tPlease enter the depreciation rate per year : ");
	scanf(" %f",&d);
	printf("\n\n\t\tPlease enter number of years : ");
	scanf(" %d",&n);
	printf(" %d %f %d\n\n",c,d,n);
	for(i=1;i<=n;i++)
	{
		P = (float)c * pow((1-d),(float)i);
		printf("\n\n\t\tThe present value of the book after %d years : %f\n\n",i,P);
	}
	return 0;
}
