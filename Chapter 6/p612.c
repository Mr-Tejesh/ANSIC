#include<stdio.h>
int main()
{
	int i,j;
	printf("\n\n");
	for(i=0;i<15;i++)
	{
		printf("\n");
		
		
			if(i==3||i==4||i==5)
			{
				printf("\t\t\t\t* * * *");
			}
			else if(i==9||i==10||i==11)
			{
				printf("\t\t\t\t                            * * * *");
			}
			else
			{
				printf("\t\t\t\t");
				for(j=0;j<18;j++)
					printf("* ");
			}
	}printf("\n\n\n");return 0;
}
