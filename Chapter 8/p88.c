#include<stdio.h>
#include<string.h>
int main(){
	char txt[100],revtxt[100];
	int txtlen,i=0,flag,rev;
	printf("\n\n\t\tPlease enter any string : ");
	scanf("\n");
	scanf(" %[^\n]s",txt);
	
	txtlen = strlen(txt);
//	printf("\n\n\t\tLength of the string is : %d",txtlen);
	rev=txtlen;
	for(txtlen-1;txtlen>=0;txtlen--){
//		printf(" %c",txt[txtlen]);

		revtxt[i] = txt[txtlen];

//		printf(" %c",revtxt[i]);
		i++;
	}
//	printf(" %c %c %c %c %c",revtxt[1],revtxt[2],revtxt[3],revtxt[4],revtxt[5]);
	for(i=0;i<rev;i++){

//		printf(" \n%c 2    %c 2\n",txt[i],revtxt[i+1]);

		if(txt[i]==revtxt[i+1]){
			flag=0;
		}
	}

	if(flag==0){
		printf("\n\n\t\tThe string entered is a palindrome");
	}else{
		printf("\n\n\t\tThe string entered is not a palindrome");
	}
	printf("\n\n\n");return 0;
}
