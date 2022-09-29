#include<stdio.h>
int main()
{
	float f;
	printf("\n\n\t\tPlease enter the price of an item : ");	
	scanf(" %f",&f);
	printf("\n\n\t\tThe price of an item in paise : %.0f paise\n\n",f*100);
	return 0;
}
