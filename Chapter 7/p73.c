/*
	In this program total number of votes considered are 100
	If u want more or less just change the ballot count and in loops
*/
#include<stdio.h>
int main()
{
	int ballot[100],count[6]={0,0,0,0,0,0},i,j;
	printf("\n\n\n\t\t Candidate A : 1\n\t\t Candidate B : 2\n\t\t Candidate C : 3\n\t\t Candidate D : 4\n\t\t Candidate E : 5\n\n\t\tPlease cast your vote here : ");
	for(i=0;i<100;i++)
	{
		scanf(" %d",&ballot[i]);
	}
	for(i=0;i<100;i++)
	{
		j = ballot[i];
		switch(j)
		{
			case 1:
				count[j-1]+=1;
				break;
                        case 2:
                                count[j-1]+=1;
                                break;
                        case 3:
                                count[j-1]+=1;
                                break;
                        case 4:
                                count[j-1]+=1;
                                break;
                        case 5:
                                count[j-1]+=1;
                                break;
                        default:
                                count[5]+=1;
                                break;
		}
	}
//	printf("\n\n %d %d %d %d %d %d",count[0],count[1],count[2],count[3],count[4],count[5]);
	for(i=0;i<5;i++)
	{
		char a =65+i;
		printf("\n\n\t\tNumber of votes casted for candidate %c is %d",a,count[i]);
	}printf("\n\n\t\tNumber of spoilt ballot votes are %d\n\n",count[5]);

	return 0;
}
