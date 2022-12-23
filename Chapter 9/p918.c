#include<stdio.h>
const char* month(int);
int main(){
	int m;
	printf("\n\n\t\tPlease enter month number : ");
	scanf(" %d",&m);
	printf("\n\n\t\t%s\n\n\n",month(m));
	return 0;
}
const char* month(int m){
	switch (m){
		case 1:
			return " January";
			break;
               case 2:
                        return " February";
                        break;
               case 3:
                        return " March";
                        break;
               case 4:
                        return " April";
                        break;
               case 5:
                        return "May ";
                        break;
               case 6:
                        return "June ";
                        break;
               case 7:
                        return " July";
                        break;
               case 8:
                        return "August ";
                        break;
               case 9:
                        return " September";
                        break;
               case 10:
                        return "October ";
                        break;
               case 11:
                        return "November";
                        break;
               case 12:
                        return "December ";
                        break;
		default:
			return "Please enter any number between 1-12";
			break;
	}
}
