#include<stdio.h>

void fibonacci(int);

int main(){
	int n;
	printf("\n\n\t\tPlease enter length of series : ");
	scanf(" %d",&n);
	fibonacci(n);
	return 0;
}

void fibonacci(int n){
	int i,nxt,curr=1,prev=0;
	printf("\n\n\t\tThe Fibonacci series of size %d : ",n);
	for(i=0;i<n;i++){
		if(i==0){
			nxt = curr;
		}else{
			nxt = curr+prev;
			prev=curr;
			curr=nxt;
		}printf("  %d  ",nxt);
	}printf("\n\n\n");
}
