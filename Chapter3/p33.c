#include<stdio.h>
int main()
{
        float f;
        int i,z;
        printf("\n\n\t\tPlease enter any decimal number : ");
        scanf("%f",&f);
        i=f;
	z=i%100;
        printf("\n\n\t\tThe right most intergral part of number is : %d ",z);
        return 0;
}

