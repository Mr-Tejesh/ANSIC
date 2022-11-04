#include<stdio.h>
#define max 100
int main()
{
	char a[max],len=0;
	printf("\n\n\t\tPlease enter any string less than 100 characters : ");
	fgets(a, sizeof(a), stdin);
	for(int i=0;i<100;i++)
	{
		if(a[i]=='\0')
		{
			break;
		}else{
			len+=1;
		}
	}printf("\n\n\t\tLength of the string is : %d\n\n\n",len-1);
	return 0;
}
