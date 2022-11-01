#include<stdio.h>
int main()
{
	int i;
	printf("\n\n\t\tPlease enter any integer : ");
	scanf(" %d",&i);
	if(i%2==0)
		printf("\n\n\t\tThe given number is %d and it is even number\n\n",i);
	else
		printf("\n\n\t\tThe given number is %d and it is odd number\n\n",i);
	return 0;
}
