#include <stdio.h>

//defining function
int fib(int n);

int main()
{
	int n , i ; 
	
	//taking input from the user
	printf("Enter the N: ") ;
	scanf("%d" , &n) ;
	
	//printing series using loop
	for(i=0 ; i<n ; i++)
	{
		printf("%d " , fib(i)) ; 
	}
		
}

//creating function
int fib(int n)
{
	if(n==0)
	{
		return 0 ; 
	}
	if(n==1)
	{
		return 1  ;
	}
	
	//recursion
	int fibNm1 = fib(n-1) ;
	int fibNm2 = fib(n-2) ;
	
	return fibNm1 + fibNm2 ;
	
 	
}
