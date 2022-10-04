#include<stdio.h>
int main()
{
	int x,y;
	float i,ii,iii;
	printf("\n\n\t\tPlease enter the values of x and y : ");
	scanf(" %d %d",&x,&y);
	i = (float)(x+y)/(x-y);
	ii = (float)(x+y)/2;
	iii = (float)(x+y)*(x-y);
	printf("\n\n\t\tThe evaluated answers are : %.2f, %.2f and %.2f\n\n\n",i,ii,iii);
	return 0;
}
