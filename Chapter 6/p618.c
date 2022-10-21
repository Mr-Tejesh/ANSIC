#include<stdio.h>
int main()
{
	int i,count =0;
	printf("\n\n");
	for(i=1;i<101;i++)
	{
		if(i%2==0||i%3==0)
		{
			continue;
		}
		else{
			count+=1;
			printf("%4d",i);
		}
	}printf("\n The count of above numbers : %d\n\n",count);
	return 0;
}
