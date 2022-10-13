#include<stdio.h>
int main()
{
        int x,y;
        printf("\n\n\t\tPlease enter any integer : ");
        scanf(" %d",&x);
	if(x>0)
	{
		y=1;
	}
	else if(x<0)
	{
		y=-1;
	}
	else
	{
		y=0;
	}
	printf("\n\n\t\tThe value of y is : %d\n\n",y);
        return 0;
}

