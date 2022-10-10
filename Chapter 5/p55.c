#include<stdio.h>
int main()
{
	int mat,phy,che,mp,mpc;
	printf("\n\n\t\tPlease enter maths marks : ");
	scanf(" %d",&mat);
        printf("\n\n\t\tPlease enter physics marks : ");
        scanf(" %d",&phy);
        printf("\n\n\t\tPlease enter chemistry marks : ");
        scanf(" %d",&che);
	mp = mat+phy;
	mpc = mat+phy+che;
	if(mat>=60 && phy>=50 && che>=40 && (mp>=150 || mpc>=200))
	{
		printf("\n\n\t\tThe person is eligible for professional course\n\n\n");
	}
	else
	{
		printf("\n\n\t\tThe person is not eligible for professional course\n\n\n");
	}
	return 0;
}
