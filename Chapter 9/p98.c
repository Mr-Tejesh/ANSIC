#include<stdio.h>
#include<string.h>
#include<ctype.h>
void low2up(char txt[], int);

int main(){
	char txt[150];
	int txtlen;
	printf("\n\n\t\tPlease enter any text maximum lenght of 150 characters : ");
	scanf(" %[^\n]s",txt);
	txtlen = strlen(txt);
	low2up(txt,txtlen);
	return 0;
}

void low2up(char txt[],int txtlen){
	int txtval;
	for(int i=0;i<txtlen;i++){
		txtval = txt[i];
		if(txtval>97&&txtval<123){
			txt[i] = toupper(txt[i]);
		}
	}

	printf("\n\n\t\t%s\n\n",txt);
}
