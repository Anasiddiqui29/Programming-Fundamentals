#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	//creating string variable
	char sentence[1000] , i;
	int max_words = 100 ;  
	
	//taking input from the user
	printf("Enter a sentence of your choice: ");
	gets(sentence) ; 
	
	//creating 2D array using pointers using dynamic memory allocation
	char **ptr  = (char**) calloc(1000,sizeof(char*)) ;
	
	// Tokenizing the sentence and storing words in the 2D array
    char *token = strtok(sentence, " "); //function to parse through sentence
    int wordcount = 0;
    while (token != NULL && wordcount < max_words - 1) 
	{
    	*(ptr+wordcount) = (char *)calloc(strlen(token) + 1, sizeof(char));
		
		strcpy(*(ptr+wordcount), token);
        token = strtok(NULL, " ");
        wordcount++;
	}
	
	//displaying 2D array
	for(i=0; i<wordcount ; i++)
	{
		printf("%s\n", ptr[i]) ;
	}
	
	//free allocated memory
	for ( i = 0; i < wordcount; i++)
	{
        free(ptr[i]);
    }
    free(ptr);
}
