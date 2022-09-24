#include<stdio.h>
int main()
{
	int conv;
	float c,f;
	printf("To convert from °F to °C enter 1 for vice versa enter 2 : ");
	scanf(" %d",&conv);
	if(conv==1)
	{
		printf("\nPlease enter temperature in Fahrenheit : ");
		scanf(" %f",&f);
		c = (f-32)*5/9;
		printf("\nThe converted temperature is : %.2f\n",c);
	}
	else if(conv==2)
	{
		printf("\nPlease enter temperature in Celsius : ");
		scanf(" %f",&c);
		f = ((9*c)/5)+32;
		printf("\nThe converted temperature is : %.2f\n",f);	
	}
	else
	{
		printf("\nPlease enter valid choice\n");
	}
	return 0;
}
