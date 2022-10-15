#include<stdio.h>
int main()
{
	int prev=0,curr=1,nxt,n;
	printf("\n\n\t\tPlease enter the size of series : ");
	scanf(" %d",&n);
	printf("\n\n\t\t%d",1);
	do{
		nxt=prev+curr;
		prev=curr;
		curr=nxt;
		printf("\t%d",nxt);
		n-=1;
	}while(n!=0);
	printf("\n\n");
	return 0;
}
