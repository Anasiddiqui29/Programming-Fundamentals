#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("Student ID : 23k-0575\n") ;
	printf("Name : Muhammad Anas Siddiqui") ;
	printf("\n") ;
	FILE * fptr1 , * fptr2 , * fptr3 ;
	
	//creating all 3 files
	fptr1 = fopen("Personal.txt" , "w") ;
	fptr2 = fopen("Department.txt" , "w") ;
	fptr3 = fopen("Combine.txt" , "w") ;
	
	int n , i ;
	
	//taking input from the user
	printf("Enter the number of persons you want to record ID: ") ;
	scanf("%d" , &n) ; 
	
	//creating structure
	struct IDs
	{
		int id ;
		char name[10] ;
		int salary ;
	} data[n] ; 
	
	//taking input from the user
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the id of person %d : " , i+1) ;
		scanf("%d" , &data[i].id) ;
		printf("Enter the name of person %d : " , i+1) ;
		getchar();
		fgets(data[i].name , 20 ,stdin) ;
		printf("Enter the salary of person %d : " , i+1) ;
		scanf("%d" , &data[i].salary) ;
		
	}
	
	//personal txt 
	fprintf(fptr1 , "%s %s\n" , "ID" , "Name") ;
	
	for(i=0 ; i<n ; i++)
	{
		fprintf(fptr1 , "%d %s\n" , data[i].id , data[i].name) ;
	}
	
	//Department txt
	fprintf(fptr2 , "%s %s\n" , "ID" , "Salary") ;
	
	for(i=0 ; i<n ; i++)
	{
		fprintf(fptr2 , "%d %d\n" , data[i].id , data[i].salary) ;
	}
		
	//Combine txt
	fprintf(fptr3 , "%s %s %s\n" , "ID" , "Name" , "Salary") ;
	
	for(i=0 ; i<n ; i++)
	{
		fprintf(fptr3 , "%d %s %d\n" , data[i].id , data[i].name , data[i].salary) ;
	}
	
	//closing all three files
	fclose(fptr1) ;
	fclose(fptr2) ;
	fclose(fptr3) ;
	
}
