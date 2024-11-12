#include <stdio.h>
#include <math.h>

int main()
{
	signed int num1 ;
	float result , result2;  
	
	//taking input from the user
	printf("Enter the number: ");
	scanf("%d", &num1) ; 
	
	//multiplying the number 16 using natural log
	result = log(num1) + log(16) ;
	result2 = pow( 2.718281828 , result);
	
	printf("Answer : %.1f", result2);
	
	
}
