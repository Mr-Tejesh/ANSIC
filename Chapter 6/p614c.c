#include<stdio.h>
#include<math.h>
int main()
{
	float i=1,j,sum,sum2=0,temp;
	do{
		sum=sum2;
		j=1/i;
		sum2=sum2+pow(j,i);
		i+=1;
		temp=sum2-sum;	
	}while(temp>0.00001);
	printf("\n\n\t\tThe SUM of series to an accuracy of 0.00001 is : %f\n\n",sum2);
	return 0;
}
