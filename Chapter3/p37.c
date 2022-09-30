#include<stdio.h>
#include<math.h>
int main()
{
	float a;
	printf("\n\n\t\tPlease enter any real number : ");
	scanf(" %f",&a);
	printf("\n\n\t\tSmallest integer : %.0f   Given number : %.4f   Largest integer : %.0f \n",ceil(a),a,floor(a));
	return 0;
}
