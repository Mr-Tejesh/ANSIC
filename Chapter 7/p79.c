#include<stdio.h>
#define size 10
int main()
{
	int temp,i,j,min,a[size],indx;
	printf("\n\n\t\tPlease enter the max of %d unsorted elements : ",size);
	for(i=0;i<size;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		min = a[i];
		for(j=i+1;j<size;j++)
		{
			if(a[j]<min)
			{
				temp=min;
				min=a[j];
				a[j]=temp;
			}
		}
		a[i]=min;
	}
	printf("\n\n\t\tThe sorted list is : ");
	for(i=0;i<size;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\n\n\n",a[4]);return 0;
}
