#include <stdio.h>

void reverse(int *arr , int size) ;

int main()
{
	int n ; 
	
	printf("Enter the size of an array(10): ") ; 
	scanf("%d" , &n);
	
	int array[n] , i ; 
	
	//taking input from the user
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value of integer: ") ;
		scanf("%d" , &array[i]) ; 
	}
	
	int *ptr ; 
	
	ptr = &array[0] ; 
	
	reverse(ptr , n) ;
	
}

//function to reverse and print the numbers
void reverse(int *arr, int size)
{
	int i ; 
	
	for(i=size-1 ; i>=0 ; i--)
	{
		printf("%d " , *(arr+i)) ;
	}
		
}
