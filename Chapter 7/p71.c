/*
	In this solution only 5 points are considered
	and all the points are integers
*/
#include<stdio.h>
int main()
{
	int n=5,x[5],y[5],i,xi=0,yi=0,xi2=0,xiyi=0;
	float m,c;
	printf("\n\n\t\tPlease enter all the points as x y : ");
	for(i=0;i<5;i++)
	{
		scanf(" %d %d",&x[i],&y[i]);
	}
	for(i=0;i<5;i++)
	{
		xi+=x[i];
		yi+=y[i];
		xi2+=x[i]*x[i];
		xiyi+=x[i]*y[i];
	}
	m = (float)(n*xiyi-xi*yi)/(float)(n*xi2-xi*xi);
	c = (float)(yi-m*xi)/(float)n;
	printf(" %d %d %d %d %f %f\n\n",xi,yi,xi2,xiyi,m,c);
	printf("\n\n\t\tThe line equation is y = %.2f x + %.2f\n\n\n",m,c);
	return 0;

}
