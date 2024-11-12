#include <stdio.h>
#include <string.h>

int main()
{
	char string[50] ; 
	char encrypt[50] ;
	
	//taking input from the user
	printf("Enter String: ") ;
	fgets(string , sizeof(string) , stdin) ; 
	
	//encrypting string
	int i ; 
	for(i=0 ; i<50 ; i++)
	{
		encrypt[i] = string[i] + (i+1) ;
	}
	
	encrypt[strlen(string)-1] = '\0' ; //to terminate the Enter press
	
	puts(encrypt) ;
	
	//creating file and inserting the encrypted text
	FILE * fptr ;
	char decrypt[50] ;
	
	fptr = fopen("Encryption.txt" , "w") ;
	fprintf(fptr , "%s" , encrypt) ; 
	
	fclose(fptr) ;
	
	//reading the encrypted text from file 
	
	fptr = fopen("Encryption.txt" , "r") ;
	
	fgets(decrypt , sizeof(decrypt) , fptr) ; 
	
	//decrypting the text
	for(i=0 ; i<50 ; i++)
	{
		string[i] = decrypt[i] -(i+1) ;
	}
	
	string[strlen(decrypt)] = '\0' ;
	
	//printing decrypted text
	puts(string) ; 
	
	fclose(fptr) ; //closing file 
	
}
