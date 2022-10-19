#include<stdio.h>
#include<math.h>
int main()
{
	int p,n;
	float v,r;
	printf("\n\n\t\t");
	for(int i=1;i<11;i++)
	{
		p=i*1000;
		printf("\n\t\t\t For P = %d\n",p);
		for(n=1;n<11;n++)
		{
			if(n==1)
			{
				printf("\t\t");
				for(r=0.10;r<0.21;r+=0.01)
				{
					printf("%-12.2f",r);
				}
			}
			printf("\n\nn=%-2d & P=%-7d",n,p);
			for(r=0.10;r<0.21;r+=0.01)
			{
				v = p*pow((1+r),n);
				printf("%-12.2f",v);
			}
			 p*=1.2;
		}
		printf("\n\n");
	}
	printf("\n\n");
	return 0;
}
