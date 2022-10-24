#define pi 3.141592
#include<stdio.h>
#include<math.h>
float fact(float n);
float i;
int main()
{
        int j=2,k=1;
        float e1,e2,x,temp,rads;
        printf("\n\n\t\tPlease enter the value of x : ");
        scanf(" %f",&x);
        rads = pi*(x/180);
        e2 = 1;
//      printf(" \n\n%f\n\n",e2);
        do{
           	e1=e2;
                temp = (pow(rads,j)/fact(j));
                if(k%2==0){
                        e2 = e2+temp;
                }else{
                      	e2 = e2-temp;
                }
//              printf("\n\n%f\n\n",e2);
                j+=2;
                k+=1;
        }while(temp>0.0001);
        printf("\n\n\t\tThe value of CosX upto accuracy of 0.00001 is : %f\n\n",e2);
        return 0;
}
float fact(float n)
{
        i=1;
	while(n>0)
        {
                i=i*n;
                n-=1;
        }
	return i;
}





