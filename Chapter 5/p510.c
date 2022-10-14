#include<stdio.h>
#include<math.h>
int main()
{
        float add,root,x1,x2,a,b,c;
        printf("\n\n\t\tPlease enter values of a, b and c : ");
        scanf(" %f %f %f",&a,&b,&c);
	root = b*b-4*a*c;
//	printf("\n\n%.2f\n\n",root);
	x1 = (-b+sqrt(root))/(2*a);
	x2 = (-b-sqrt(root))/(2*a);
//	printf("\n\n%.3f\n\n",add);
        if(a==0&&b==0)
        {
                printf("\n\n\t\tFor the constants entered, there will be no solution\n\n");
        }
	else if(a==0)
        {
                x1 = (float)(0-(c/b));
                printf("\n\n\t\tFor the constants entered, there will be one root x1 = x2 = %.2f\n\n",x1);
        }
	else if(root<0)
	{
		printf("\n\n\t\tFor the constants entered, there are no real roots\n\n");
	}
	else
	{
		printf("\n\n\t\tFor the constants entered, the roots are x1 = %.2f and x2 = %.2f\n\n",x1,x2);
	}
	return 0;
}





