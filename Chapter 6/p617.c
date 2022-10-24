#define pi 3.141592
#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	int i,j,m=90,n=90,k;
	for(i=0;i<=90;i+=15)
	{
		x = pi*((float)i/180); 
		k = (int)(10*sin(x));
		for(j=0;j<n;j++)
		{
			printf(" ");
		}
		printf("****");
		if(m!=90)
		{
			for(j=0;j<m-n;j++)
			{
				printf(" ");
			}printf("****");
		}
		for(int l=0;l<k;l++)
		{
			printf("\n");
		}
		n-=15;
		m+=15;
	//	printf(" %d   %d\n\n",i,k);
	}
	return 0;
}
