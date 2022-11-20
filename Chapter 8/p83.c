#include<stdio.h>
int main()
{
	char ext[50];
	int i,indext,portion;
	printf("\n\n\t\tPlease enter the String : ");
	scanf(" %[^\n]s",ext);
//	printf("%s",ext);

	printf("\n\n\t\tPlease enter start index and number of characters to be extracted from index : ");
	scanf(" %d %d",&indext,&portion);
	printf("\n\n\t\tThe extracted part of the string is : ");
	for(i=indext-1;i<indext+portion-1;i++){
		printf("%c",ext[i]);
	}
	printf("\n\n\n");return 0;
}
