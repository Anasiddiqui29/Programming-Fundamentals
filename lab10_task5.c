#include <stdio.h>
#include <string.h>

int main()
{
	//creating file
	FILE * fptr ; 
	
	fptr = fopen("Count.txt" , "w") ; 
	
	fprintf(fptr , "%s", "My name is Anas") ;
	
	fclose(fptr) ; 
	
	//counting number of times "a" has appeared 
	int i , count = 0 ;
	char str[30] ;
	
	fptr = fopen("Count.txt" , "r") ;
	
	fgets(str , sizeof(str) , fptr) ;
	
	for(i=0 ; i<30 ; i++)
	{
		if(str[i]=='a')
		{
			count = count + 1 ;
		}
	}
	printf("Number of times 'a' has appeared: %d" ,count) ;
	
}
