#include <stdio.h>
#include <string.h>

int main()
{
	//structure
	struct student
	{
		char rollno[20];
		char name[20] ;
		char department[20] ;
		char course[20] ;
		int year ;
	}  ;
	
	//stroing details into variable name "data"
	struct student data[450] =
	{
		{"18k-8990" , "Ganesh kumar" , "BSCS" , "PF" , 2018},
		{"19k-0571" , "Ali pasha" , "BSCYB" , "Calculus" , 2019},
		{"20k-7777" , "Krishna Devi" , "BSSE" , "Applied Physics" , 2020},
		{"21k-8989" , "Piyush lal" , "BSFT" , "Business Calculus" , 2021},
		{"23k-0978" , "Tarak Mehta" , "BSCS" , "Ethics" , 2022},
		{"23k-0575" , "Sara Nehal" , "BSSE" , "ICT" , 2023} ,
		{"17k-7652" , "Aslam Pasha" , "BSEE" , "Applied Physics" , 2017},
		{"16k-0764" , "Rohit Sharma" , "BSEE" , "Ethics" , 2016},
		{"15k-9999" , "Darvesh Ali" , "BSCS" , "Islamiat" , 2015},
		{"14k-6666" , "Kapil Dev" , "BSSE" , "Pakistan Studies" , 2014}
		
	} ;
	
	//setting variables
	int year_joined,i ;
	char roll[20] ;
	
	//taking input from the user
	printf("Enter the year joined by the student: ");
	scanf("%d" , &year_joined);
	
	
	//printing student names of whose years matches
	for(i=0 ; i<450 ; i++)
	{
		if(year_joined== data[i].year) 
		{
			printf("Student name : %s \n" ,data[i].name );
		}
	}
	
	
	fflush(stdin);
	printf("Enter the roll num of the student: ");
	gets(roll);
	
	//printing details of student whose roll number matches with roll number entered
	for(i=0 ; i<450 ; i++)
	{
		if(strcmp(roll,data[i].rollno)==0)
		{
			printf("Student roll number : %s \n" , data[i].rollno);
			printf("Student name = %s \n" , data[i].name) ;
			printf("Department = %s \n" , data[i].department);
			printf("Course = %s \n" , data[i].course) ;
			printf("Year joined: %d",data[i].year) ;
		}
	}
}
