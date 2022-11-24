#include<stdio.h>
#include<string.h>
int main(){
	char txt1[100],txt2[100];
	int n,len;
	printf("\n\n\t\tPlease enter string 1 : ");
	scanf(" \n");
	scanf(" %[^\n]s",txt1);
	printf("\n\n\t\tPlease enter string 2 : ");
	scanf("\n");
	scanf(" %[^\n]s",txt2);
	len = strlen(txt1);
	n = strcmp(txt1,txt2);
	printf(" %d",n);
	if(n==0){
		printf("\n\n\t\tBoth the strings are equal");
	}else if(n<0){
		printf("\n\n\t\tString 1 is less than String 2");
	}else{
		printf("\n\n\t\tString 1 is greater than String 2");
	}
	printf("\n\n\n"); return 0;
}
