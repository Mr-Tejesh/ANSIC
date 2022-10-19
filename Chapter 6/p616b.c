#include<stdio.h>
int main()
{
        printf("\n\n\n");
        for(int i=0;i<5;i++)
        {
                printf("\t\t");
                for(int j=0;j<5;j++)
                {
                        if((i==1||i==3||i==2)&&(j==1||j==2||j==3))
                                printf("  ");
			else
				printf("S ");
                }
                printf("\n");
        }printf("\n\n");return 0;
}


