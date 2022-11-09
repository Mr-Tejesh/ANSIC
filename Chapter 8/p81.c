#include<stdio.h>
int main()
{
	char a[20];
	int i=0;
	printf("\n\n\t\tPlease enter any name : ");
	fgets(a, sizeof(a), stdin);
	while(a[i]!='\0')
	{
		printf(" %d\t",a[i]);
		i+=1;
	}printf("\n\n\n");return 0;
}
