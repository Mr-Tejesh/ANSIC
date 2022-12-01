/*
	Source : https://www.sanfoundry.com/c-program-count-occurrence-substring/


*/
#include <stdio.h>
#include <string.h>
int main()
{
	char txt[100], sub[100];
	int count=0,count1=0;
    	int i, j, l, txtlen, sublen;

	printf("\n\n\t\tEnter a string : ");
	scanf("%[^\n]s", txt);
	txtlen = strlen(txt);

	printf("\n\n\t\tEnter a substring : ");
	scanf(" %[^\n]s", sub);
	sublen = strlen(sub);

 	for (i = 0; i < txtlen;)
	{
        	j = 0;
	        count = 0;
		while ((txt[i] == sub[j]))
	        {
	            count++;
		    i++;
	            j++;
	        }
	        if (count == sublen)
	        {
	            count1++;
	            count = 0;
	        }
	        else
	            i++;
	}
    	printf("\n\n\t\t The substring occurs %d times", count1);
	printf("\n\n\n");return 0;
}
