#include <stdio.h>
#include <math.h>

int main()
{
	int values[8]  , i ,sum = 0;
	
	for(i=0 ; i<=8 ; i++ )
	{
		printf("Enter the numbers:  ");
		scanf("%d", &values[i]);	
	} 
	for(i=0 ; i<=9 ; i++)
	{
		sum =sum+values[i] ; 
	}
	printf("Sum : %d", sum);

}
