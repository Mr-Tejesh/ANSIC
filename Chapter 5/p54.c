#include<stdio.h>
int main()
{
	int g8=0,g6=0,g4=0,l4=0,ib810=0,ib68=0,ib46=0,ib04=0,a[20];
	printf("\n\n\t\tPlease enter the marks : ");
	for(int i=0;i<20;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(int i=0;i<20;i++)
	{
		if(a[i]>80)
		{
			g8+=1;
			if(a[i]>80 && a[i]<=100)
				ib810+=1;
		}
		else if(a[i]>60)
		{
			g6+=1;
			if(a[i]>60 && a[i]<=80)
				ib68+=1;
		}
                else if(a[i]>40)
                {
                        g4+=1;
                        if(a[i]>40 && a[i]<=60)
                                ib46+=1;
                }
                else if(a[i]<40)
                {
                        l4+=1;
                        if(a[i]>0 && a[i]<=40)
                                ib04+=1;
                }

	}
	printf("\n\n\t\tNo. of students obtained marks greater than 80 : %d",g8);
	printf("\n\n\t\tNo. of students obtained marks greater than 60 : %d",g6);
	printf("\n\n\t\tNo. of students obtained marks greater than 40 : %d",g4);
	printf("\n\n\t\tNo. of students obtained marks less than 40 : %d",l4);
	printf("\n\n\t\tNo. of students obtained marks in between 81 and 100 : %d",ib810);
	printf("\n\n\t\tNo. of students obtained marks in between 61 and 80 : %d",ib68);
	printf("\n\n\t\tNo. of students obtained marks in between 41 and 60 : %d",ib46);
	printf("\n\n\t\tNo. of students obtained marks in between 0 and 40 : %d\n\n",ib04);
	return 0;
}
