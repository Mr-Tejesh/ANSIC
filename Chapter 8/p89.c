#include<stdio.h>
#include<string.h>
char *gcvt(double value, int ndigit, char *buf);
int main(){

	char a[200]="";
	int indx,i;
	float pric;
	printf("\n\n\t\tPlease enter the price in RRRR.PP format only : ");
	scanf(" %f",&pric);

	char price[7];
	gcvt(pric,6,price);

	printf(" %s",price);

	for(i=0;i<strlen(price);i++){
		if(price[i]=='.'){
			indx=i;
			break;
		}
	}
	if(indx>4){
		printf("\n\n\t\tPlease enter the price in right format");
		goto end;
	}else{
		//printf(" %d",indx);
		i=0;
		if(indx==4)
			goto thousand;
		else if(indx==3)
			goto hundred;
		else if(indx=2)
			goto ten;
		else if(indx=1)
			goto one;
//	SWITCH CASE TO STORE THOUSAND
			thousand:
				switch(price[i]){
					case '1':
						strcat(a,"ONE THOUSAND");
						break;
                                        case '2':
                                                strcat(a,"TWO THOUSAND");
                                                break;
                                        case '3':
                                                strcat(a,"THREE THOUSAND");
                                                break;
                                        case '4':
                                                strcat(a,"FOUR THOUSAND");
                                                break;
                                        case '5':
                                                strcat(a,"FIVE THOUSAND");
                                                break;
                                        case '6':
                                                strcat(a,"SIX THOUSAND");
                                                break;
                                        case '7':
                                                strcat(a,"SEVEN THOUSAND");
                                                break;
                                        case '8':
                                                strcat(a,"EIGHT THOUSAND");
                                                break;
                                        case '9':
                                                strcat(a,"NINE THOUSAND");
                                                break;
                                        default:
                                                break;
				}i++;

	//END OF THOUSAND SWITCH
//SWITCH CASE FOR HUNDRED
			hundred:
				switch(price[i]){
	                                 case '1':
                                                strcat(a," ONE HUNDRED");
                                                break;
                                         case '2':
                                                strcat(a," TWO HUNDRED");
                                                break;
                                         case '3':
                                                strcat(a," THREE HUNDRED");
                                                break;
                                         case '4':
                                                strcat(a," FOUR HUNDRED");
                                                break;
                                         case '5':
                                                strcat(a," FIVE HUNDRED");
                                                break;
                                         case '6':
                                                strcat(a," SIX HUNDRED");
                                                break;
                                         case '7':
                                                strcat(a," SEVEN HUNDRED");
                                                break;
                                         case '8':
                                                strcat(a," EIGHT HUNDRED");
                                                break;
                                         case '9':
                                                strcat(a," NINE HUNDRED");
                                                break;
                                         default:
                                                break;
				}i++;
			//END OF HUNDRED
//SWITCH CASE FOR TEN
			ten:
				switch(price[i]){
					case '1':
						strcat(a," TEN");
						break;
                                        case '2':
                                                strcat(a," TWENTY");
                                                break;
                                        case '3':
                                                strcat(a," THIRTY");
                                                break;
                                        case '4':
                                                strcat(a," FOURTY");
                                                break;
                                        case '5':
                                                strcat(a," FIFTY");
                                                break;
                                        case '6':
                                                strcat(a," SIXTY");
                                                break;
                                        case '7':
                                                strcat(a," SEVENTY");
                                                break;
                                        case '8':
                                                strcat(a," EIGHTY");
                                                break;
                                        case '9':
                                                strcat(a," NINETY");
                                                break;
                                        default :
                                                break;
				}i++;
//END OF TEN
//SWITCH CASE FOR ONE
			one:
				switch(price[i]){
					case '1':
						strcat(a," ONE");
						break;
                                        case '2':
                                                strcat(a," TWO");
                                                break;
                                        case '3':
                                                strcat(a," THREE");
                                                break;
                                        case '4':
                                                strcat(a," FOUR");
                                                break;
                                        case '5':
                                                strcat(a," FIVE");
                                                break;
                                        case '6':
                                                strcat(a," SIX");
                                                break;
                                        case '7':
                                                strcat(a," SEVEN");
                                                break;
                                        case '8':
                                                strcat(a," EIGHT");
                                                break;
                                        case '9':
                                                strcat(a," NINE");
                                                break;
                                        default:
                                                break;
				}i+=2;
//END OF ONE
//adding paise

				strcat(a," AND PAISE");
//SWITCH CASE FOR DOT TEN
                        dotten:
                            	switch(price[i]){
                                        case '1':
                                                strcat(a," TEN");
                                                break;
                                        case '2':
                                                strcat(a," TWENTY");
                                                break;
                                        case '3':
                                                strcat(a," THIRTY");
                                                break;
                                        case '4':
                                                strcat(a," FOURTY");
                                                break;
                                        case '5':
                                                strcat(a," FIFTY");
                                                break;
                                        case '6':
                                                strcat(a," SIXTY");
                                                break;
                                        case '7':
                                                strcat(a," SEVENTY");
                                                break;
                                        case '8':
                                                strcat(a," EIGHTY");
                                                break;
                                        case '9':
                                                strcat(a," NINETY");
                                                break;
                                        default :
                                                break;
                                }i++;
//END OF DOT TEN
//SWITCH CASE FOR ONE
                        dotone:
                            	switch(price[i]){
                                        case '1':
                                                strcat(a," ONE");
                                                break;
                                        case '2':
                                                strcat(a," TWO");
                                                break;
                                        case '3':
                                                strcat(a," THREE");
                                                break;
                                        case '4':
                                                strcat(a," FOUR");
                                                break;
                                        case '5':
                                                strcat(a," FIVE");
                                                break;
                                        case '6':
                                                strcat(a," SIX");
                                                break;
                                        case '7':
                                                strcat(a," SEVEN");
                                                break;
                                        case '8':
                                                strcat(a," EIGHT");
                                                break;
                                       case '9':
                                                strcat(a," NINE");
                                                break;
                                        default:
                                                break;
                                }
//END OF DOT ONE
	}
	printf("\n\n\t\tThe price in expansion format is : %s",a);
	end:
	printf("\n\n\n"); 
	return 0;

}
