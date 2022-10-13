#include<stdio.h>
int main()
{
        int x;
        printf("\n\n\t\tPlease enter any integer : ");
        scanf(" %d",&x);
	printf("\n\n\t\tThe value of y is %d\n\n",((x>0)?1:((x<0)?-1:0)));
        return 0;
}

