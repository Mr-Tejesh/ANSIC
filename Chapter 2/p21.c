#include<stdio.h>
int main()
{	
	int n;
	float j=0,i;
	printf("\n\n\t\tPlease enter the value of n : ");
	scanf(" %d",&n);
	for(i=1;i<=n;i++)
	{
		j=j+(1/i);
	}
	printf("\n\n\t\tThe sum of the harmonic series : %.6f\n\n",j);
	return 0;
}
