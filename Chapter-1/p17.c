#include<stdio.h>
void add(int x, int y);
void sub(int x, int y);
int main()
{
	add(20,10);
	sub(20,10);
	return 0;
}
void add(int x, int y)
{
	printf("\n\t\t%d + %d = %d\n",x,y,x+y);
}
void sub(int x, int y)
{
	printf("\n\t\t%d - %d = %d\n",x,y,x-y);
}

