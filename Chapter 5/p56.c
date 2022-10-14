#include<stdio.h>
int main()
{
	float i,j;
	printf("\n\n\t\tNumber");
	for(i=0;i<1;i+=0.1)
	{
		printf("\t%.1f",i);
	}
	for(j=0;j<10;j+=1)
	{
		printf("\n\n\t\t %.1f",j);
	}
	printf("\n\n");
	return 0;
}
