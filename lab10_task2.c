#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fptr ;
	
	//opening the file in append mode to insert some text
	fptr = fopen("students.txt" , "a") ;
	
	fprintf(fptr , "School Name : %s \n Year joined : %d" , "The Educators" , 2012) ; //inserting text 
	
	fclose(fptr) ; 
	
}
