#include<stdio.h>
int main()
{
	int pa,cas;
	float na,disc;
	char cloth;
	printf("\n\n\t\tPlease enter purchase amount : ");
	scanf(" %d",&pa);
	printf("\n\n\t\tIs the selected product Mill cloth or Handloom items (m/h) : ");
	scanf(" %c",&cloth);
/*	cas = (pa>100)?((pa>200)?((pa>300)?3:2):1):0;*/
	if(cloth=='m'||cloth=='h')
	{	
		switch((pa>100)?((pa>200)?((pa>300)?3:2):1):0)
		{
			case 0:
				if(cloth=='m')
					disc=0;
				else if(cloth=='h')
					disc=0.05;
				na=(float)(pa-(pa*disc));
				break;
                        case 1:
                                if(cloth=='m')
                                        disc=0.05;
                                else if(cloth=='h')
                                        disc=0.075;
                                na=(float)(pa-(pa*disc));
				break;
                        case 2:
                                if(cloth=='m')
                                        disc=0.075;
                                else if(cloth=='h')
                                        disc=0.1;
                                na=(float)(pa-(pa*disc));
				break;
                        case 3:
                                if(cloth=='m')
                                        disc=0.1;
                                else if(cloth=='h')
                                        disc=0.15;
                                na=(float)(pa-(pa*disc));
				break;
                        default :
                                printf("\n\n\t\tPlease enter valid amount\n\n");
				goto end;

		}
	}
	else
	{
		printf("\n\n\t\tPlease enter valid item type\n\n");
		goto end;
	}
	printf("\n\n\t\tTotal amount to be paid by customer is : %.2f\n\n",na);
	end:
	return 0;
}
