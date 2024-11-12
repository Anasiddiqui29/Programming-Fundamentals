#include <stdio.h>
#include <string.h>

int main()
{
	FILE * fptr1 , * fptr2 , * fptr3 ;
	
	//creating file
	fptr1 = fopen("Information.txt" , "w") ;
	fptr2 = fopen("Details.txt" , "w") ; 
	
	//storing some text inside them
	fprintf(fptr1 , "%s\n%s\n" , "FAST NUCES" , "1st semester Student") ;
	fprintf(fptr2 , "%s" , "Department : BSCS") ;
	
	//creating third file to merge the text
	fptr3 = fopen("combined.txt" , "w") ;
	
	fclose(fptr1) ;
	fclose(fptr2) ;
	
	char str1[30] , str2[30] , str3[30] ;
	
	//opening files in read mode and reading it
	fptr1 = fopen("Information.txt" , "r") ;
	fgets(str1, sizeof(str1) ,fptr1) ;
	fgets(str2, sizeof(str2) ,fptr1) ;
	
	fclose(fptr1) ;
	fclose(fptr2) ;
	
	fptr2 = fopen("Details.txt" , "r") ;
	fgets(str3 , sizeof(str3) , fptr2) ;
	
	//merging the text from file 1 and file 2 into file 3
	fprintf(fptr3 ,"%s\n%s\n%s", str1 , str2 , str3) ;
	
	fclose(fptr3) ;
	
}
