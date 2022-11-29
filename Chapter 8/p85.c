#include<stdio.h>
#include<string.h>
int main()
{
	char txt[100];
	int n,i,j,min,temp;
	printf("\n\n\t\tPlease enter any word or string : ");
	scanf("\n");
	scanf("%[^\n]s",txt);
	n=strlen(txt);
//	printf("%d",n);

	int asc[n];
	for(int i=0;i<n;i++){
		asc[i]=txt[i];
//		printf(" %d",asc[i]);
	}

	for(i=0;i<n;i++)
        {
                min = asc[i];
                for(j=i+1;j<n;j++)
                {
                        if(asc[j]<min)
                        {
                                temp=min;
                                min=asc[j];
                                asc[j]=temp;
                        }
                }
                asc[i]=min;
        }
	printf("\n\n\t\tThe string in alphabetical order is : ");
        for(i=0;i<n;i++)
        {
                printf("%c",asc[i]);
        }
	printf("\n\n\n");return 0;








	printf("\n\n\n");return 0;
}
