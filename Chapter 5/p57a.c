#include<stdio.h>
int main()
{
	int i,j,a,count=1;
	printf("\n\n\t\tPlease enter the height of traingle : ");
	scanf("%d",&a);
	printf("\n");
	for(i=0;i<=a;i++)
	{	
		printf("\n\t\t");
		for(j=0;j<i;j++)
		{
			printf("%d ",count);
			count+=1;
		}
	}
	printf("\n\n");
	return 0;
}
