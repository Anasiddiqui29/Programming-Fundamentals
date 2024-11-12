#include <stdio.h>
#include <math.h>

int main()
{
	int num ,rem , sum ;
	sum = 0 ;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num!=0)
	{
		rem = num %10 ; 
		num = num-rem ;
		sum = sum + rem ;
		num = num /10 ;
		
	}
	
	printf("The sum of the digits: %d", sum);	
}
