#include<stdio.h>
#include<string.h>
int main(){
	int n,i,indx;
	char name[n][100],roll[n][10],stud[100];

//	Code for students count
	printf("\n\n\t\tPlease enter number of students in class : ");
	scanf(" %d",&n);

//	Code to store details of students
	printf("\n\n\t\tPlease enter student name and their roll number : \n");
	for(i=0;i<n;i++){
		scanf(" %s",name[i]);
		scanf(" %s",roll[i]);
	}

//	printf(" %s %s",name[1],roll[1]);

	printf("\n\n\t\tPlease enter student name to find out roll number : ");
	scanf(" %s",stud);

	for(i=0;i<n;i++){

		if(strcmp(name[i],stud)==0){
			indx=i;
			break;
		}

	}

	printf("\n\n\t\tThe roll number of %s is %s",name[indx],roll[indx]);
	printf("\n\n\n");return 0;


}
