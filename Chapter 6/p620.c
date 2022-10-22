#include<stdio.h>
int main()
{
	int n[10],i,pos=0,neg,sum=0;
	printf("\n\n\t\tPlease enter any 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf(" %d",&n[i]);
	}
	for(i=0;i<10;i++)
	{
		if(n[i]>=0&&sum<1000)
		{
			sum=sum+n[i];
			pos+=1;
		}
		else if(sum>999){
			break;
		}
	}if(sum>999){
		printf("\n\n\t\tThe sum exceeded 999 after adding %d values\n\n",pos);
	}else{
		printf("\n\n\t\tThe sum of %d positive numbers is : %d\n\n",pos,sum);
	}
	return 0;
}
