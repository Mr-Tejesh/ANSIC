#include<stdio.h>
int main()
{
        printf("\n\n\n");
        for(int i=0;i<5;i++)
        {
                printf("\t\t");
                for(int j=0;j<5;j++)
                {
                        if((i==2)&&(j==2))
                                printf("O ");
			else
				printf("S ");
                }
                printf("\n");
        }printf("\n\n");return 0;
}


