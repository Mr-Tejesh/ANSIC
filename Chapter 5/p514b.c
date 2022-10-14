#include<stdio.h>
int main()
{
        int count=0;
        printf("\n\n\t\tThe following numbers are the prime numbers in between 100 and 200");
        for(int i=100;i<=200;i++)
        {
                for(int j=1;j<20;j++)
                {
                        if(i%j==0)
                        {
                                count+=1;
                        }
                }
                if(count<2)
                {
                        printf("\t%d",i);
                }
		if(i%20==0)
		{
			printf("\n");
		}
		count = 0;
        }
	printf("\n\n");
        return 0;
}

