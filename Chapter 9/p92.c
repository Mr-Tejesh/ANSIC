#include<stdio.h>
void space(int);

int main(){
	int x,a,b;
	printf("\n\n\t\tPlease enter any two numbers : ");
	scanf(" %d %d",&a,&b);
	printf("\n\n\t\tPlease enter number of spaces required : ");
	scanf(" %d",&x);
	printf("\n\n\t\t %d",a);
	space(x);
	printf("%d",b);
	printf("\n\n\n");return 0;
}

void space(int x){
	for(int i=0;i<x;i++){
		printf(" ");
	}
}
