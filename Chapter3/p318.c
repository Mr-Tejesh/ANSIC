#include<math.h>
#include<stdio.h>
int main()
{
	int i,sq;
	float sqr;
	printf("\n\n\t\tNumber\t\tSquare-root\t\tSquare");
	for(i=0;i<=100;i+=10)
	{
		sq = i*i;
		sqr = sqrt(i);
		printf("\n\n\t\t   %d \t\t     %.2f    \t\t  %d",i,sqr,sq);
	}
	printf("\n\n\n");
	return 0;
}
