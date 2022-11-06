#include<stdio.h>
#define size 10

int main()
{
	int arr[size],key,pos,found;
	printf("\n\n\t\tPlease enter the max of %d sorted elements : ",size);
	for(int i=0;i<size;i++)
	{
		scanf(" %d",&arr[i]);
	}
	printf("\n\n\t\tPlease enter the element to be searched : ");
	scanf(" %d",&key);

	pos = size/2;
	loop:
	if(pos<0 || pos>size)
	{
		printf("\n\n\t\tThe element is not found in the array");
	}else{
		if(key==arr[pos])
		{
			printf("\n\n\t\tThe elements is found at index %d",pos+1);
		}else if(key<arr[pos]){
			pos=pos/2;
			goto loop;
		}else{
			pos = pos+pos/2;
			goto loop;
		}
	}
	printf("\n\n\n");return 0;
}


