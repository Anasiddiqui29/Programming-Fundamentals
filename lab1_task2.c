#include <stdio.h>
int main()
{

	int value1, value2, value3;
   
    // taking input from the user
	printf("Enter the value 1: ");
	scanf("%d", &value1); 
	printf("Enter the value 2: ");
	scanf("%d", &value2);
	
	// swapping values without using temporary variable
	value3 =value1 + value2;
	value2 =  value3 - value2;
	value1 = value3 - value2 ;
	
	printf("value1 = %d, value2 = %d" , value1 , value2);
}

