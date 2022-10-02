#include<stdio.h>
int main()
{
	int male,female;
	float ratio;
	printf("\n\n\t\tPlease enter number of male in the city : ");
	scanf(" %d",&male);
	printf("\n\n\t\tPlease enter number of female in the city : ");
	scanf(" %d",&female);
	ratio=(float)female/male;
	printf("\n\n\t\tThe female to male ratio in the city is : %.2f\n\n",ratio);
	return 0;
}
