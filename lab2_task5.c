#include <stdio.h>
#include <math.h>

int main()
{
	//setting variables
	signed int num , result ;  
	
	//taking input from the user
	printf("Enter the number: ");
	scanf("%d" , &num);
	
	//dividing the number by 4
	result = num << 4 ; 
	printf("Answer after the multiplication : %d", result);
	
}
