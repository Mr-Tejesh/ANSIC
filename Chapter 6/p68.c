#include<stdio.h>
int main()
{
	int age[10],i,count=0;
	printf("\n\n\t\tPlease enter the ages of each person with a space : ");
	for(i=0;i<10;i++)
	{
		scanf(" %d",&age[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(age[i]>=50&&age[i]<=60)
		{
			count+=1;
		}continue;
	}
	printf("\n\n\t\tTotal number of people in age between 50 and 60 is : %d\n\n",count);
	return 0;
}
