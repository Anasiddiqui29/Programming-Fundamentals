#include <stdio.h>
#include <math.h>

int main()
{
	int num1 , num2 ,lcm , gcd , numerator ,denominator, remainder ;
	
	printf("Enter the first number : ");
	scanf("%d", &num1);
	printf("Enter the second number : ");
	scanf("%d", &num2);
	
	numerator = (num1>num2)?num1:num2;
    denominator = (num1<num2)?num1:num2;
    remainder = numerator % denominator;
    
    while (remainder != 0)
    {
        numerator   = denominator;
        denominator = remainder;
        remainder   = numerator % denominator;
    }
    gcd = denominator;
    lcm = num1 * num2 / gcd;
    printf("GCD = %d\n",  gcd);
    printf("LCM = %d\n",lcm);	
	
	
}
