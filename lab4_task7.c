#include <stdio.h>
#include <math.h>

int main()
{
	int i , n ;
	
	printf("How many numbers you want to enter: ");
	scanf("%d",&n);
	int values[n] ;
	
	for(i = 1 ; i<=n ; i++)
	{
		printf("Enter the numbers: ");
		scanf("%d",&values[i]);
	}
	for(i=n ; i>=1 ; i--)
	{
		printf("%d,", values[i]);
	}
	
	
}
