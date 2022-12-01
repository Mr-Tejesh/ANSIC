//The program is modified to print the price and the sales period of a car

#include<stdio.h>
#include<string.h>

int main()
{
	char cars[20][20]={"Vehicle type","Maruti-800","Maruti-DX","Gypsy","Maruti-Van","Month of sales","02/01","07/01","04/02","08/02","Price","210000","265000","315750","240000"};
	char usercar[20], userdates[6];
	int i,indx;

	printf("\n\n\t\t\ti.Maruti-800\n\n\t\t\tii.Maruti-DX\n\n\t\t\tiii.Gypsy\n\n\t\t\tiv.Maruti-Van\n\n\t\tPlease select car and enter the name as it is : ");
	scanf(" %s",usercar);
//	printf("\n\n\t\tPlease enter period in endmonth/startmonth format(ex:03/01) : ");
//	scanf(" %s",userdates);
	for(i=1;i<5;i++)
	{
		if(strcmp(usercar,cars[i])==0){
			indx=i;
			break;
		}

	}
	printf("\n\n\t\tThe price of the car is Rs.%s/- only",cars[indx+10]);
	printf("\n\n\t\tThe car is sold in the period %s ",cars[indx+5]);

//	printf(" %s",cars[indx]);
	printf("\n\n\n");return 0;
}
