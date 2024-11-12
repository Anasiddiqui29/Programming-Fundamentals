#include <stdio.h>
#include <string.h>

int main()
{
	int i ;
	char sentence[100];
	printf("Enter the sentence: ");
	gets(sentence) ;
	
	char find;
	printf("Enter the character you want to find: ");
	scanf(" %c" , &find);
	
	int count = 0;
	for(i=0 ; i<100 ; i++)
	{
		if(sentence[i]==find)
		{
			count++ ;
		}
		
	}
	printf("Number of times %c present in the sentence: %d" ,find, count);
	
	
	
}