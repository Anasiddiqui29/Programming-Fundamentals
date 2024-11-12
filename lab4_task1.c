#include <stdio.h>
#include <math.h>

int main()
{
	int num , i ,num1 , sum=0; 
	
	printf("Enter the number : ");
	scanf("%d" , &num);
	
	for(i=1 ; i<num ; i++ )
	{
		if(num%i == 0)
		{
			sum = sum+i ; 
		}
	}
	if(sum==num)
	{
		printf("This is a perfect number");
	}
	else
	{
		printf("This is not a perfect number");
	}
	
	
}