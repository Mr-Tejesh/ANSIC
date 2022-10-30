#include<math.h>
#include<stdio.h>
int main()
{
	float dr,sc,hc;
	float eoq,EOQ,tbo,TBO;
	printf("\n\n\t\tPlease enter demand rate(items per unit time) : ");
	scanf(" %f",&dr);
	printf("\n\n\t\tPlease enter setup costs(per order) : ");
	scanf(" %f",&sc);
	printf("\n\n\t\tPlease enter holding cost(per item per unit time) : ");
	scanf(" %f",&hc);
	eoq=2*dr*sc/hc;
	tbo=2*sc/(dr*hc);
	EOQ=sqrt(eoq);
	TBO=sqrt(tbo);
	printf("\n\n\t\tEconomic Order Quantity for a single item is : %.2f",EOQ);
	printf("\n\n\t\tOptimal Time Between Orders is : %.2f",TBO);
	return 0;	
}

