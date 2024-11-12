#include <stdio.h>
#include <math.h>

int main()
{
	int s1 = 0 , s2 = 1 , i , next_term  ,sum = 0;
	
	printf("%d\n" ,s2);
	
	for(next_term=0 ; next_term<10000 ; )
	{                  
		next_term = s1+s2; 
		s1 = s2 ;
		s2 = next_term ;
		if(next_term > 10000)
		{
			break ;
		}
		printf("%d \n",next_term);
		
		if(next_term%3==0 ||next_term%5==0||next_term%7==0)
		{
			
			sum = sum+ next_term ; 
			
		}
	
			
	}
	printf("The sum is : %d" , sum);

	
	
	
	
	
}