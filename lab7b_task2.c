#include <stdio.h>

//defining function
int multiplication(int n , int m) ;

int main()
{
	//declaring variables
	int x , y ;
	
	//taking input from the user
	printf("Enter the number 1: ");
	scanf("%d" , &x) ;
	
	printf("Enter the number 2: ");
	scanf("%d" , &y) ;
	
	//calling function
	int res = multiplication(x,y) ;
	printf("Multiplication of two numbers is : %d" , res) ;
}

//creating function
int multiplication(int n , int m)
{
	if(n==0 || m==0)
	{
		return 0 ;	
	} 
	else
	{
		if(m>0)
		{
			return n + multiplication(n , m-1) ; //recursion
		}
	}	
	
}
