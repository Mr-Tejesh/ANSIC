#include<stdio.h>
int main()
{
	float dep,pv,sv,yos;
	printf("\n\n\t\tPlease enter Depreciation : ");
	scanf(" %f",&dep);
	printf("\n\n\t\tPlease enter Purchase price : ");
	scanf(" %f",&pv);
	printf("\n\n\t\tPlease enter Years of service : ");
	scanf(" %f",&yos);
	sv = pv-(dep*yos);
	printf("\n\n\t\tThe Salvage value is : %.2f\n\n",sv);
	return 0;
}
