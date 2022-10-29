#include<stdio.h>
int main()
{
	int n;
	printf("\n\n\t\tNumber of rows : ");
	scanf(" %d",&n);
	for(int row=1;row<=n;row++)
	{
		int i=1;
		for(int j=1;j<=row;j++)
		{
			printf("%4d",i);
			i=i*(row-j)/j;
		}printf("\n");
	}return 0;
}
