#include<math.h>
#include<stdio.h>
int main()
{
        double x;
        char T;double sine,cose,tang;
        printf("\n\n\t\tPlease enter the value of x : ");
        scanf(" %lf",&x);
        printf("\n\n\t\tPlease enter the function symbol : ");
        scanf(" %c",&T);
//      printf("%.2lf     %c\n\n",x,T);
        switch(T)
	{
		case 's':
        	{
                	sine=sin(x);
	                printf("\n\n\t\tThe result is : %.2lf",sine);
			break;
        	}
		case 'c':
        	{
                	cose=cos(x);
	                printf("\n\n\t\tThe result is : %.2lf",cose);
			break;
        	}
		case 't':
        	{
	                tang=tan(x);
        	        printf("\n\n\t\tThe result is : %.2lf",tang);
			break;
	        }
		default:
		{
             		printf("\n\n\t\tPlease enter valid value of symbol");
	        	break;
		}
	}
	printf("\n\n\n");
        return 0;
}





