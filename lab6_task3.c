#include <stdio.h>
#include <string.h>

int isPrime(int num)
{
	int i , mid , count =0;
	mid = num/2 ;
	
	for(i=mid ; i>1 ; i--)
	{
		if(num%mid==0)
		{
			count++ ;
		}
	}
	if(count>0)
	{
		return 0;
	}
	else
	{
		return 1 ;
	}
}

int main() 
{
	int num1 , sum ; 
	
	
	printf("Enter the number: ");
	scanf("%d", &num1) ;
	
	sum = isPrime(num1);
	
	if(sum>0)
	{
		printf("This is not a prime number");
	}
	else
	{
		printf("This is a prime number");
	}
	
	
}