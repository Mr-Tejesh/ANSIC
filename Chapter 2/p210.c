#define large 12
#define med 7
#define small 5
#define veg 22
#define nonveg 27
#include<stdio.h>
int main()
{
	char size,nveg;
	int price;
	printf("\n\n\t\tWhich size of pizza do u want s/m/l : ");
	scanf(" %c",&size);
	printf("\n\t\tDo u want veg or non veg v/n : ");
	scanf(" %c",&nveg);
	if(nveg=='v')
	{
		if(size=='s')
		{
			price = small*veg;
		}
                else if(size=='m')
                {
                        price = med*veg;
                }
                else if(size=='l')
                {
                        price = large*veg;
                }

	}
	else if(nveg=='n')
	{
                if(size=='s')
                {
                        price = small*nonveg;
                }
                else if(size=='m')
                {
                        price = med*nonveg;
                }
                else if(size=='l')
                {
                        price = large*nonveg;
                }

	}
	else
		printf("\n\n\t\tPlease enter valid choice\n\n");
	printf("\n\n\t\tThe price of selected pizza is : %d/-\n\n",price);
	return 0;
}
