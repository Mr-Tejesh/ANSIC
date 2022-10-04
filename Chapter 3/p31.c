#include<stdio.h>
int main()
{
	int x,y,z,temp;
	printf("\n\n\t\tPlease enter the values of x, y and z : ");
	scanf(" %d %d %d",&x,&y,&z);
	printf("\n\n\t\tOld numbers : %d %d %d",x,y,z);
	temp=x;
	x=y;
	y=z;
	z=temp;
	printf("\n\t\tNew numbers : %d %d %d\n\n",x,y,z);
	return 0;
}
