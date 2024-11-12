#include <stdio.h>
#include <math.h>

int main()
{
	signed int num1 , num2 , result1  ;
	float result2 , result3 ; 
	
	//taking input from the user
	printf("Enter the number 1: ");
	scanf("%d", &num1);
	printf("Enter the number 2: ");
	scanf("%d", &num2);
	
	result1 = num1 & num2 ; 
	
	result2 = log (result1) - log(4) ;
	result3 = pow (2.718281828 , result2);
	
	printf("Answer: %.2f",result3);
}
