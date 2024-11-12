#include <stdio.h>
#include <math.h>

int main()
{
	// setting variables
	int num1  ;
	float result1 , result2 ; 
	
	//taking input from the user
	printf("Enter the number : ");
	scanf("%d", &num1);
	
	//checking if the logarithm is an integer
	result1 = log10(num1);
	result2 = (int)result1 == result1 ; 
	printf("%d", result2);
		
}
