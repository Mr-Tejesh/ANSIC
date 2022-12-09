#include<stdio.h>
int x,y;
void exchange(int, int);
int main(){
	printf("\n\n\t\tPlease enter the value of X and Y : ");
	scanf(" %d %d",&x,&y);
	exchange(x,y);
	printf("\n\n\n");return 0;
}

void exchange(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	x = a;
	y = b;
	printf("\n\n\t\tThe new values of X and Y are : %d %d",x,y);
}
