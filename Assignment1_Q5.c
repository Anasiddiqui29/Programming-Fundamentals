#include <stdio.h>
#include <math.h>

int main()
{
	//declaring variables
	int n , res ,i , acube, bcube ,sum ,a ,b,c,d,sum2 ,ccube ,dcube ;
	
	//taking input from the user
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	//calculating max value
	res = pow(n,3) ;
	
	//calculating first 2 numbers
	for(a=1 ; a<n ;a++)
	{
		acube = pow(a,3);
	
		for(b=a+1 ; b<n ; b++)
		{
			bcube = pow(b,3);
			
			sum = acube + bcube ;
			
			//finding other two numbers
			if(sum<res)
			{
				for(c=a+1 ; c<n ; c++)
				{
					ccube = pow(c,3);
					
					for(d = c+1 ; d<n ; d++)
					{
						dcube = pow(d,3);
						
						sum2 = ccube + dcube ; 
						
						//printing Ramanujan-Hardy numbers
						if(sum==sum2)
						{
							printf("%d^3 + %d^3 = %d  and %d^3 + %d^3 = %d  \n", a,b,sum,c,d,sum2);
						}	
					}
				}			
			}		
		}
		
	}
	




}
