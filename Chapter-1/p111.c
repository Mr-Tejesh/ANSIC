#include<stdio.h>
#include<math.h>
int main()
{
	float x1,x2,y1,y2,D;
	printf("\n\n\t\tPlease enter the points X1, X2, Y1 and Y2 : ");
	scanf(" %f %f %f %f",&x1,&x2,&y1,&y2);
	D=sqrtf(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	printf("\n\n\t\tThe distance between the points is : %.3f\n\n",D);
	return 0;
}
	
