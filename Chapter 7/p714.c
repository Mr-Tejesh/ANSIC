#include<stdio.h>
int main()
{
	int i,sum=0,isbnn[10],check;
	printf("\n\n\t\tPlease enter the ISBN number without any gaps or hyphens : ");
	for(i=0;i<10;i++)
	{
		scanf(" %d",&isbnn[i]);
	}
	for(i=0;i<9;i++)
	{
		sum+=(i+1)*(isbnn[i]);
	}
	printf(" %d",sum);
	check = sum%11;
	if(check==isbnn[9])
	{
		printf("\n\n\t\tThe ISBN is VALID\n\n\n");
	}else{
		printf("\n\n\t\tThe ISBN is INVALID\n\n\n");
	}
	return 0;

}
