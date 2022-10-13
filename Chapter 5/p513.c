#include<stdio.h>
int main()
{
	int y6,n4,i,count=0,sum=0;
	printf("\n\n\t\tThe numbers that are divisible by 6 and not by 4 are");
	for(i=1;i<100;i++)
	{
		if(i%6 == 0)
		{
			if(i%4!=0)
			{
				sum+=i;count+=1;printf("\n\n\t   \t\t\t\t%d",i);
			}
		}
	}
	printf("\n\n\t\tThe sum and count of all the above numbers are : %d and %d\n\n",sum,count);
	return 0;
}
