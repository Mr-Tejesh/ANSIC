#include<stdio.h>
int main()
{
	int count=0,sum=0;
	for(int i=100;i<=200;i++)
	{
		if(i%7==0)
		{
			count+=1;
			sum+=i;
		}
	}
	printf("\n\n\t\tNumber of integers divisible by 7 : %d\n\n\t\tSum of integers divisible by 7 : %d\n\n\n",count,sum);
	return 0;
}
