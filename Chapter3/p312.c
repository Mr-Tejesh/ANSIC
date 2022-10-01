#include<stdio.h>
int main()
{
	float f;
	short s;
	double d;
	char c;
	long double ld;
	int sof,sos,sod,soc,soi,sold,i;
	sof = sizeof(f);
	sos = sizeof(s);
	sod = sizeof(d);
	soc = sizeof(c);
	sold = sizeof(ld);
	soi = sizeof(i);
	printf("\n\n\t\t Size of float : %d Bytes\n\n\t\t Size of short : %d Bytes\n\n\t\t Size of double : %d Bytes\n\n\t\t Size of char : %d Bytes\n\n\t\t Size of long double : %d Bytes\n\n\t\t Size of int : %d Bytes\n\n",sof,sos,sod,soc,sold,soi);
	return 0;
}
