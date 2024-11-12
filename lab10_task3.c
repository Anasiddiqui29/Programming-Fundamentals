#include <stdio.h>
#include <string.h>


int main()
{
	//creating structure
	struct data
	{
		char fname[20] ; 
		int year ; 
		char lname[20] ; 
	} ;
	
	int n ;
	
	printf("Enter the number of people you want to enter data of : ");
	scanf("%d" , &n) ;
	
	struct data details[n] ;
	
	int i ;
	
	//taking input from the user
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the first name of person %d: ",i+1) ;
		fflush(stdin) ; 
		fgets(details[i].fname , sizeof(details[i].fname ), stdin) ;
		printf("Enter your last name of person %d: ",i+1) ;
		fgets(details[i].lname , sizeof(details[i].lname) , stdin) ;
		printf("Enter your year joined: ") ;
		scanf("%d" , &details[i].year) ;  
	}
	
	//creating file
	FILE * fptr ; 
	fptr = fopen("Person.txt" , "w") ;
	
	//writing data
	for(i=0 ; i<n ; i++)
	{
		fprintf(fptr , "First name: %s\n" , details[i].fname) ;
		fprintf(fptr, "Last name: %s\n", details[i].lname) ;
		fprintf(fptr , "Year joined: %d" , details[i].year) ;
	}
	
	fclose(fptr) ; 
}
