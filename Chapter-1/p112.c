#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
        float x1,y1,r,p,a;
        printf("\n\n\t\tPlease enter the points X1, and  Y1 : ");
        scanf(" %f %f",&x1,&y1);
        r=sqrtf((x1*x1)+(y1*y1));
	p = 2*pi*r;
	a = pi*r*r;
        printf("\n\n\t\tThe perimeter of the circle is : %.3f\n\n\t\tThe area of the circle is : %.3f\n\n",p,a);
        return 0;
}

