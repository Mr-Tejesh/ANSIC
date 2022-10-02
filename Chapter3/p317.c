#define pi 3.14150
#include<math.h>
#include<stdio.h>
int main()
{
	double i,si,co,radian;
	printf("\n\n\t\tx(degrees)\t\tsin(x)\t\tcos(x)");
	for(i=0;i<=180;i+=15)
	{
		radian=i/180;
		si=sin(pi*radian);
		co=cos(pi*radian);
		printf("\n\n\t\t    %.0lf   \t\t %.2lf \t\t %.2lf ",i,si,co);
	}
	printf("\n\n\n");
	return 0;
}
