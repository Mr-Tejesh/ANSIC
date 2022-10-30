#include<stdio.h>
#define rows 6
#define columns 4
int main()
{
	int marks[rows][columns],sum[rows][1],r,c,rollno,total,max;
	printf("\n\n\t\tPlease enter roll number and marks of respective student : ");
	for(r=0;r<rows;r++)
	{
		for(c=0;c<columns;c++)
		{
			scanf(" %d",&marks[r][c]);
		}
	}
	for(r=0;r<rows;r++)
	{
		printf("\n\n");
		for(c=0;c<columns;c++)
		{
			printf("%-6d",marks[r][c]);
		}
	}

//      From here the total of function is done

	printf("\n\n\t\t\t-------***Total marks of each student***-------");
	for(r=0;r<rows;r++)
	{
		total=0;
		for(c=1;c<columns;c++)
		{
			total+=marks[r][c];
		}
	sum[r][0]=total;
	printf("\n\n\t\t    Marks obtained by the student bearing roll no.%d is : %d",marks[r][0],total);
	}

//	Total marks function ends here


//      Highest marks in each subject function starts here

        printf("\n\n\n\n\n\t\t   -------***Student with highest marks in each subject***-------");
        for(c=1;c<columns;c++)
        {
                max=marks[0][c];
                for(r=0;r<rows;r++)
                {
                        if(marks[r][c]>=max)
                        {
                                max=marks[r][c];
                                rollno = r+1;
                        }
                }printf("\n\n\t\tThe student bearing roll no.%d got highest marks of %d in subject %d",rollno,max,c);

        }


//      Highest marks in each subject function ends here



//	Student with highest marks function start here

	printf("\n\n\n\n\n\t\t\t-------***Student with highest marks***-------");
	max=sum[0][0];
	for(r=0;r<rows;r++)
	{
		if(sum[r][0]>=max)
		{
			max = sum[r][0];
			rollno = r+1;
		}
	}printf("\n\n\t\t     The student bearing roll no.%d got highest marks of %d ",rollno,max);

//	Student with highest marks function ends here


	printf("\n\n");return 0;

}


















