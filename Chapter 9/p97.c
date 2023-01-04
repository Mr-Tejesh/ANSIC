#include<stdio.h>
int prime(int);
int main(){
	int num,pnum;
	printf("\n\n\t\tPlease enter any positive number : ");
	scanf(" %d",&num);
	pnum = prime(num);
	if(pnum == 1){
                printf("\n\n\t\tThe number is prime\n\n");
        }else{
              	printf("\n\n\t\tThe number is not prime\n\n");
        }
	return 0;
}

int prime(int num){

	int pnum = 1;
	if(num == 0 || num == 1){
		pnum = 0;
	}
	for(int i=2;i<=num/2;++i){
		if(num%i==0){
			pnum = 0;
			break;
		}
	}
	return pnum;
}
