#include<stdio.h>
int main()
{
	float rice,sugar;
	printf("\n\n\t\tPlease enter the price of RICE and SUGAR : ");
	scanf(" %f %f",&rice,&sugar);
	printf("\n\n\t\t*** LIST OF ITEMS ***\n\t\tItem\t    Price\n\t\tRice\t    Rs %.2f\n\t\tSugar\t    Rs %.2f\n\n",rice,sugar);
	return 0;
}
