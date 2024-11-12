#include <stdio.h>
#include <math.h>

int main()
{
	int dividend , divisor , quotient;
	
	printf("Enter the 1st number : ");
	scanf("%d", &dividend);
	printf("Enter the 2nd number : ");
	scanf("%d", &divisor);
	quotient = 0 ;
	
	if (divisor > dividend)
	{
		printf("Answer = 0");
	}
	while(dividend >= divisor )
	{
		dividend = dividend - divisor ;
		quotient = quotient + 1 ;
			
	}
	
	printf("Answer = %d", quotient);
	
	
	
}