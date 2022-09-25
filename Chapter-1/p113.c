#define pi 3.14
#include<stdio.h>
#include<math.h>
int main()
{
        float x1,x2,y1,y2,D,a;
        printf("\n\n\t\tPlease enter the points X1, X2, Y1 and Y2 : ");
        scanf(" %f %f %f %f",&x1,&x2,&y1,&y2);
        D=sqrtf(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	a = pi*D*D/4;
        printf("\n\n\t\tThe area of the circle is : %.3f\n\n",a);
        return 0;
}

