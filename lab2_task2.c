#include <stdio.h>
#include <math.h>

int main()
{  
	//setting variables
	float dotproduct , angle ; 
	
	//converting degree into radian
	angle = (53*(3.142))/180 ; 
	
	//calculating dotproduct
	dotproduct =  sqrt(pow(5,2) + pow(2,2) + pow(-3 , 2)) * sqrt(pow(-4,2) + pow(9,2) + pow(2 , 2)) * cos(angle) ; 
	
	printf("The dot product = %.2f", dotproduct);

	
}