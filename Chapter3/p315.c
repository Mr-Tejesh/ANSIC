#include<stdio.h>
int sum(int a, int b, int c);
int avg(int a, int b, int c);
int max(int a, int b, int c);
int min(int a, int b, int c);
int Sum,Avg,Max,Min;
int main()
{
	int a,b,c,SUM,AVG,MAX,MIN;
	printf("\n\n\t\tPlease enter any 3 integers : ");
	scanf(" %d %d %d",&a,&b,&c);
	SUM = sum(a,b,c);
	AVG = avg(a,b,c);
	MAX = max(a,b,c);
	MIN = min(a,b,c);
	printf("\n\n\t\tThe sum of 3 numerbs is : %d\n\n\t\tThe average of 3 numerbs is : %d\n\n\t\tThe largest of 3 numerbs is : %d\n\n\t\tThe smallest of 3 numerbs is : %d\n\n\n ",SUM,AVG,MAX,MIN);
	return 0;
}
int sum(int a, int b, int c)
{
	return a+b+c;
}
int avg(int a, int b, int c)
{
//	Avg = (a+b+c)/3;
	return (a+b+c)/3;
}
int max(int a, int b, int c)
{
/*	Max =*/ return (a>b?a:b)>c?(a>b?a:b):c;
/*	return Max;*/
}
int min(int a, int b, int c)
{
/*	Min =*/ return (a<b?a:b)<c?(a<b?a:b):c;
/*	return Min;*/
}
