#include <stdio.h>

//defining function
int GCD(int a , int b) ;

int main()
{
	int num1 , num2 ;
	
	//taking input from the user
	printf("Enter the number 1: ");
	scanf("%d" , &num1) ;
	printf("Enter the number 2: ") ;
	scanf("%d" , &num2) ;
	
	//calling function and printing result
	int res = GCD(num1 , num2) ;
	printf("GCD of two numbers is: %d" , res) ; 
	
}

//creating function to find gcd
int GCD(int a , int b)
{
	int gcd ;
	if(b==0)
	{
		return a;
	}
	else
	{
		int small = (a<b) ? a : b ;
		
		int count = 1 ;
		
		while(count<=small)
		{
			if(a%count==0 && b%count==0)
			{
				gcd = count ;
			}
			count++ ;
		}
		return gcd ;	
	}
}
