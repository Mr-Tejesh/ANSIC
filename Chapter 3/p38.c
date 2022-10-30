#include<stdio.h>
int main()
{
	float u,a,dis;
	int t,T,i;
	printf("\n\n\t\tPlease enter velocity, acceleration and total time : ");
	scanf(" %f %f %d",&u,&a,&T);
	printf("\n\n\t\tPlease enter time intervals : ");
	scanf(" %d",&t);
	for(i=0;i<=T;i+=t)
	{
		dis = (u*i)+((a*i*i)/2);
		printf("\n\t\tAt time interval %d distance travelled is %.2f\n ",i,dis);
	}
	printf("\n");
	return 0;
}
