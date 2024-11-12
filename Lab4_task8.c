#include <stdio.h>
#include <math.h>

int main()
{
	int i , n , start , end , fizz=0 , buzz = 0 , fizzbuzz=0 ;
	printf("Start : ");
	scanf("%d", &start);
	printf("End: ");
	scanf("%d", &end); 
	
	n = (end-start)+1 ;
	int values[n] ;
	
	for(i=0 ; i<=n ; i++)
	{
		values[i] = start+i ;
		
		if(values[i]%3==0)
		{
			fizz= fizz+1;
		}
		if(values[i]%5==0)
		{
			buzz = buzz+1 ;
		}
			
		if(values[i]%3 == 0 && i%5 == 0)
		{
			fizzbuzz = fizzbuzz+1 ;
		}
	}
	printf("Fizz = %d \n", fizz);
	printf("Buzz = %d \n",buzz);		
	printf("Fizz-Buzz = %d \n",fizzbuzz);
}
