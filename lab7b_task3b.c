#include <stdio.h>

int GCD(int a , int b) ;

int main()
{
	int num1 , num2 ;
	
	//taking input from the user	
	printf("Enter the number 1: ");
	scanf("%d" , &num1) ;
	printf("Enter the number 2: ") ;
	scanf("%d" , &num2) ;
	
	//calling function
	int res = GCD(num1 , num2) ;
	printf("GCD of two numbers is: %d" , res) ; 
	
}

//creating function
int GCD(int a , int b)
{
	int gcd ;
	if(b==0)
	{
		return a;
	}
	else
	{
		gcd = GCD(b , a%b) ; //recursion
		return gcd ; 
	}
}
