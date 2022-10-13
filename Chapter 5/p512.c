#include<stdio.h>
int main()
{
	char name[15];
	float units,charge,ba,na,surcharge=0;
	printf("\n\n\t\tPlease enter the user name : ");
	scanf("%s",&name);
	printf("\n\n\t\tPlease enter number of units : ");
	scanf("%f",&units);
	if(units<=200)
	{
		charge  = 0.8;
	}
	else if(units>200&&units<=300)
	{
		charge = 0.9;
	}
	else if(units>300)
	{
		charge = 1.0;
	}
	ba=100 + (units*charge);
	if(ba>400)
	{
		surcharge=0.15;
	}
	na = ba + ba*surcharge;
	printf("\n\n\t\tThe user name is : %s\n\n\t\tThe current bill is : %.2f\n\n",name,na);
	return 0;
}
