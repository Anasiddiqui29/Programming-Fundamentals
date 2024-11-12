#include <stdio.h>

int main()
{
	int num ; 
	
	//taking input from the user
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int *ptr1 , *ptr2 ;
	
	ptr1 = &num ;
	ptr2 = ptr1 ;
	
	printf("Original value: %d \n" , num) ; 
	
	*ptr1 = *ptr1 + 1 ;
	
	printf("New value : %d \n" , *ptr1);
	
	
	
}
