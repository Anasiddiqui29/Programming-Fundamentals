#include <stdio.h>
#include <string.h>

int main()
{
	struct Student
	{
		int Studentid ;
		char FirstName[10] ; 
		char LastName[10] ; 
		int cellno ; 
		char email[20] ;
		
		struct Register
		{
			char Courseid[20] ; 
			char CourseName[20] ;
		} reg ; 
		
	} std[5] ; 
	
	int i ; 
	
	for(i=0 ; i<5 ; i++)
	{
		printf("Enter the Student %d ID: ",i+1) ;
		scanf("%d" , &std[i].Studentid) ;
		printf("Enter the first name of student %d: ",i+1);
		scanf("%s" , &std[i].FirstName) ;
		printf("Enter the Last Name of student %d: " , i+1) ;
		scanf("%s" , &std[i].LastName) ;
		printf("Enter the cell number of student %d: ",i+1) ;
		scanf("%d" , &std[i].cellno) ;
		printf("Enter the email of student %d: ", i+1) ;
		scanf("%s" , &std[i].email) ;
		printf("Enter the Course ID of student %d: ",i+1);
		scanf("%s" , &std[i].reg.Courseid);
		printf("Enter the Course name of student %d: " , i+1) ;
		scanf("%s" , &std[i].reg.CourseName) ;
		
	}
	printf("\n\n") ;
	
	//printing details of 5 students

	for(i=0 ; i<5 ; i++)
	{
		printf("Details of Student %d \n" , i+1) ;
		printf("Studend ID: %d \n" , std[i].Studentid) ;
		printf("First Name of student: %s \n" , std[i].FirstName) ;
		printf("Last name of the student: %s \n" ,std[i].LastName) ;
		printf("Cell number : %d \n",std[i].cellno) ;
		printf("Email address: %s \n" , std[i].email) ;
		printf("Course ID: %s \n" , std[i].reg.Courseid) ;
		printf("Course Name: %s \n" , std[i].reg.CourseName) ;
		
		printf("\n\n") ;
	}	
}
