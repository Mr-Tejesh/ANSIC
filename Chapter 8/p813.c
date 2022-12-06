#include<stdio.h>
int main(){

	int m,n,pos,i;
	char s1[100],s2[n];
	printf("\n\n\t\tPlease enter the main string : ");
	scanf(" %[^\n]s",s1);

//	printf(" \n\n%s\n\n",s1);

	printf("\n\n\t\tPlease enter the number of characters to be copied and the beginning position : ");
	scanf(" %d %d",&n,&pos);

	for(i=pos,m=0;i<pos+n;i++,m++){
		s2[m]=s1[i];
	}
	printf("\n\n\t\tThe copied string : %s",s2);
	printf("\n\n\n");return 0;
}
