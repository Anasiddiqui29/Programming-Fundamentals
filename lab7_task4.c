#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int N , i ; 
	
	//taking input
	printf("Enter the value of N : ");
	scanf("%d" , &N);
	
	//declaring array of different types
	char arr1[N] ;
	int arr2[N] ; 
	long int arr3[N] ;
	
	//to generate random values
	srand(time(NULL));
	
	//assigning random values to arrays
	for(i=0 ; i<N ; i++)
	{
		arr1[i] = rand() ;
		arr2[i] = rand() ;
		arr3[i] = rand() ;
	}
	
	int *ptr1 = arr1 ;
	int *ptr2 = arr2 ;
	int *ptr3 = arr3 ;
	
	//printing random values in arrays using pointers airthmetic
	for(i=0 ; i<N ; i++)
	{
		printf("%d " , *ptr1) ;
		ptr1++ ;	
	}
	printf("\n\n") ;
	
	for(i=0 ; i<N ; i++)
	{
		printf("%d ", *ptr2);
		ptr2++ ; 
	}
	printf("\n\n") ;
	
	for(i=0 ; i<N ; i++)
	{
		printf("%c ", *ptr3);
		ptr3++ ;
	}
	
	
	/*
	Adding to pointers of different types work differently because each type 
	has different size and holds different number of bytes
	*/
	
	 
	
	
	
	
	
	
	
}
