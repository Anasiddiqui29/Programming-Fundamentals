#include <stdio.h>
#include <string.h>

int main()
{
	int n ;
	
	//taking input from the user
	printf("Enter the number of students: ");
	scanf("%d",&n) ;
	getchar() ; 
	
	char name[n][20] ; 
	int marks[n] , i ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the name of the stduent: ");
		fgets(name[i],20,stdin) ; 
	}
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the marks of Student %d : " , i+1) ;
		scanf("%d",&marks[i]) ; 
	}
	 
	//creating file
	FILE * fptr ;
	fptr = fopen("students.txt","w") ;
	
	for(i=0 ; i<n ; i++)
	{
		fprintf(fptr , "Name : %s and Marks = %d\n" , name[i] , marks[i]);   
	}
	
	//closing file
	fclose(fptr) ; 	
}
