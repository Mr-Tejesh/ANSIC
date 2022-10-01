#include<stdio.h>
int main()
{
	int calls;
	float ext=1.25, bill;
	printf("\n\n\t\tPlease enter the number of calls made : ");
	scanf(" %d",&calls);
	bill = 250+ext*calls;
	printf("\n\n\t\tThe total bill for the user is : %.2f\n\n",bill);
	return 0;
}
