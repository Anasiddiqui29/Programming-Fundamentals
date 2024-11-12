#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n , i ; 
	
	//taking input from the user
	printf("Enter the value of N: ") ;
	scanf("%d" , &n) ;
	
	//memory allocation
	int *array = (int*)malloc(n*sizeof(int)) ;	
	
	//storiny array in pointer
	int *ptr = array ;
	
	//taking array values as input from user using pointers
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value of array[%d] : " , i);
		scanf("%d" , ptr) ;
		ptr++; 
	}
	
	//reset ptr to the start of the array
	ptr = array ; 
	
	//calculating sum of the values in array using pointers
	int sum = 0 ;
	for(i=0 ; i<n ; i++)
	{
		sum = sum + *ptr ;//dereferencing
		ptr++ ;
	}
	printf("Sum = %d" , sum) ; 
	
	free(array) ; 
	
}
