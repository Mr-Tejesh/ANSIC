#include<stdio.h>
#include<ctype.h>
int main()
{
	char ans[50];
	char ANS[50] = "dennis ritchie";
	int i=0,flag=0,attempt=3;
	for(attempt;attempt>0;attempt--){
		i=0,flag=0;
		printf("\n\n\t\tWho is the inventor of C : ");
		scanf("\n");
		scanf("%[^\n]s",ans);

		while(ans[i]!='\0'){
			ans[i]=tolower(ans[i]);
			i++;
		}i=0;

		while(ans[i]!='\0'||ANS[i]!='\0')
		{
			if(ans[i]!=ANS[i])
			{
				flag=1;
				break;
			}i++;
		}

		if(flag==0){
			printf("\n\n\t\tGOOD");
			break;
		}else if(attempt>1){
			printf("\n\n\t\tTry AGAIN");
		}
	}if(attempt==0){
		printf("\n\n\t\tAnswer is Dennis Ritchie");
	}

	printf("\n\n\n");return 0;

}
