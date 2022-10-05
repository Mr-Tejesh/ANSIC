#include<stdio.h>
int main()
{
	int a,b,c,d,m,n,img;
	float x1,x2;
	printf("\n\n\t\tSet of linear equations are\n\n\t\t\tax1 + bx2 = m\n\n\t\t\tcx1 + dx2 = n\n\n");
	printf("Please enter values of a, b, c, d, m and n : ");
	scanf(" %d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);
	img = (a*d)-(c*b);
	if(img==0)
	{
		printf("\n\nThe roots are undefined for these values\n\n");
	}
	else
	{
		x1 =(float)((m*d)-(b*n))/img;
		x2 = (float)((n*a)-(m*c))/img;
		printf("\n\nThe possible values of x1 and x2 are : %.2f and %.2f\n\n\n",x1,x2);
	}
	return 0;
}
