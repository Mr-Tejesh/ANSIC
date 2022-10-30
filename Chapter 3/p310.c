#include<math.h>
#include<stdio.h>
int main()
{
	float r,c,l,f,F;
	printf("\n\n\t\tPlease enter Resistance : ");
	scanf(" %f",&r);
        printf("\n\n\t\tPlease enter Inductance : ");
        scanf(" %f",&l);
	for(c=0.01;c<=0.1;c+=0.01)
	{
		f=(1/l*c)-(r*r/4*c*c);
		F=sqrt(f);
		printf("\n\n\t\tFor %.2f capacitance, damped frequency is : %.3f",c,F);
	}
	printf("\n\n");
	return 0;
}
