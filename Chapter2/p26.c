#include<stdio.h>
int main()
{
	int a[10],neg=0,pos=0,i;
	printf("\n\n\t\tPlease enter any 10 numbers : ");
	for(i=0;i<10;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]<0)
			neg+=1;
		else if(a[i]>0)
			pos+=1;
		else if(a[i]==0)
			break;
	}
	printf("\n\n\t\tNegative numbers : %d\n\t\tPositive numbers : %d\n\n",neg,pos);
	return 0;
	
}
