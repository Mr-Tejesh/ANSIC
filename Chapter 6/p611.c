#include<stdio.h>
int main()
{
	int n,bin[12],temp=0;
	printf("\n\n\t\tPlease enter any number : ");
	scanf(" %d",&n);
	while(n!=0)
	{
		bin[temp]=n%2;
		n=n/2;
		temp++;
	}
	printf("\n\n\t\tThe binary equivalent of the number entered is : ");
	while(temp>0)
	{	
		temp--;
		printf("%d ",bin[temp]);
		
	}
	printf("\n\n");
	return 0;
}
