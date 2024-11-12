#include <stdio.h>
#include <string.h>

int main()
{
	//structure
	struct student
	{
		char name[20] ;
		char rollnum[20] ;
		int sub1 ;
		int sub2 ;
		int sub3 ;
		int sub4 ;
		int sub5 ;
		int sub6 ;
		int total ;
	} ;
	
	//declare variable
	int num_students , i ;
	
	//taking input from the user
	printf("Enter the number of students: ");
	scanf("%d" , &num_students) ;
	
	struct student detail[num_students] ;
	
	for(i=0 ; i<num_students ; i++)
	{
		fflush(stdin) ;
		printf("Enter the student name: ");
		gets(detail[i].name) ;
		
		printf("Enter the roll number of the student: ");
		gets(detail[i].rollnum) ;
		
		printf("Enter the number of Subject 1: ");
		scanf("%d" , &detail[i].sub1) ;
	 	printf("Enter the number of Subject 2: ");
		scanf("%d" , &detail[i].sub2) ;
		printf("Enter the number of Subject 3: ");
		scanf("%d" , &detail[i].sub3) ;
		printf("Enter the number of Subject 4: ");
		scanf("%d" , &detail[i].sub4) ;
		printf("Enter the number of Subject 5:");
		scanf("%d" , &detail[i].sub5) ;
		printf("Enter the number of Subject 6: ");
		scanf("%d" , &detail[i].sub6) ;
		
	}
	
	for(i=0 ; i<num_students ; i++)
	{
		detail[i].total = detail[i].sub1 + detail[i].sub2 + detail[i].sub3 + detail[i].sub4 + detail[i].sub5 + detail[i].sub6 ;
	}
	
	for(i=0 ; i<num_students ; i++)
	{
		printf("Details of the student %d \n" , i+1);
		
		printf("Student name : %s \n" , detail[i].name);
		printf("Student roll number: %s \n",detail[i].rollnum);
		
		printf("Subject 1 marks = %d \n" , detail[i].sub1);
		printf("Subject 2 marks = %d \n" , detail[i].sub2);
		printf("Subject 3 marks = %d \n" , detail[i].sub3);
		printf("Subject 4 marks = %d \n" , detail[i].sub4);
		printf("Subject 5 marks = %d \n" , detail[i].sub5);
		printf("Subject 6 marks = %d \n" , detail[i].sub6);
		
		printf("Total marks = %d \n",detail[i].total);
	}
}
