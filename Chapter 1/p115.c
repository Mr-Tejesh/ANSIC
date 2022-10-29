#include<stdio.h>
void line1();
void line2();
void line3();
int main()
{
	printf("\n\n\n");
	line1();
	line2();
	line3();
	return 0;
}
void line1()
{
	printf("\t      ");
	printf("----------\t\t\t ----------\n   x =       |          |\t   y =          |          |\n\t      ----------\t\t\t ----------\n\n");
}
void line2()
{
        printf("\t      ");
        printf("----------\t\t\t ----------\n   sum =     |          |\t   Difference = |          |\n\t      ----------\t\t\t ----------\n\n");
} 
void line3()
{
        printf("\t      ");
        printf("----------\t\t\t ----------\n   Product = |          |\t   Division =   |          |\n\t      ----------\t\t\t ----------\n\n");
} 



