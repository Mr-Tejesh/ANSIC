/*
	Author freedom is taken here to modify the code 
	This code prints the highest and lowest temperature cities on particular day
*/

#include<stdio.h>
int main()
{
	int day=31,city=10,d,c,maxc,minc;
	float temp[day][city],max,min;
	printf("\n\nPlease enter the temperature of all cities daywise : ");
	for(d=0;d<day;d++)
	{
		for(c=0;c<city;c++)
		{
			scanf(" %f",&temp[d][c]);
		}
	}
/*	for(d=0;d<day;d++)
	{
		for(c=0;c<city;c++)
		{
			printf(" %6f ",temp[d][c]);
		}
		printf("\n\n");
	}
*/	for(d=0;d<day;d++)
	{	
		max = min = temp[d][0];
		for(c=0;c<city;c++)
		{
			if(max<=temp[d][c])
			{
				max = temp[d][c];
				maxc = c+1;
			}else if(min>=temp[d][c]){
				min = temp[d][c];
				minc = c+1;
			}
		}
		printf("\n\n\t\tOn day %d the highest temperature is %.2f degree celsius in city %d \n\n\n",d+1,max,maxc);
                printf("\n\n\t\tOn day %d the lowest temperature is %.2f degree celsius in city %d \n\n\n",d+1,min,minc);
	}
	return 0;
}
