#include <stdio.h>
#include <string.h>

int palindrome(char num[20])
{
	int i ,length ,mid ,count = 0 ;
	
	length = strlen(num) ; 
	mid = length/2 ;
	
	for(i=0 ; i<mid ; i++)
	{
		if(num[i]!=num[(length-1)-i])
		{
			count++ ;
		}
	}
	if(count>0)
	{
		return 0 ;
	}
	else
	{
		return 1 ;
	}
	
}


int main()
{
	int num1,sum,i ,num2;
	char numm[20] ;
	
	printf("Enter the number: ");
	scanf("%d",&num1) ;
	
	for(i=0 ; i<20 ;i++)
	{
		while(num1>0)
		{
			num2=num1%10 ;
			numm[i]=num2 ;
	 		num1 = num1 /10 ;
		}
		
	}
	
	sum = palindrome(numm) ; 
	
	if(sum==0)
	{
		printf("The number is not palindrome");
	}
	else
	{
		printf("The number is palindrome");
	}
		
}
