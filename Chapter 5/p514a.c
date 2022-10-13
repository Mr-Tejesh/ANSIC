#include<stdio.h>
int main()
{
	int a,count=0;
	printf("\n\n\t\tPlease enter any positive integer : ");
	scanf("%d",&a);
		for(int j=1;j<10;j++)
		{
			if(a%j==0)
			{
				count+=1;
			}
			if(count>2)
			{
				break;
			}
		}
	if(count<=2)
	{
		printf("\n\n\t\tThe number u entered %d is a prime number\n\n",a);
	}
	else
	{
		printf("\n\n\t\tThe number u entered %d is not a prime number\n\n",a);
	}
	return 0;
}
