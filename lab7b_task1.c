#include <stdio.h>
#include <string.h>

//defining function
int factorial(int n);

int main()
{
	// declaring variable
	int N ;
	
	//taking input from the user
	printf("Enter the number of which you want to find facotorial: ");
	scanf("%d" , &N) ; 
	
	//calling function
	int ans = factorial(N) ;
	
	printf("Factorial : %d" , ans);
	
}

//creating function
int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1 ; 
	}
	else
	{
		return n*factorial(n-1); //recursion
	}
	
	
	 
}
