#include <stdio.h>
#include <math.h>

int main()
{
	int n , N = 0;
	printf("Enter the size of a 2D array : ");
	scanf("%d" , &n);
	
	int array[n][n] ; 
	int i , j ;
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			printf("Enter the value of array[%d][%d]: " , i , j);
			scanf("%d" , &array[i][j]);
		}
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<n ; j++)
		{
			if(array[i][j] != array[j][i])
			{
				N = 1 ;
			} 
			
		}
	}
	
	if(N == 1)
	{
		printf("Array is not symmetric");
	}
	else
	{
		printf("Array is symmetric");
	}	
	
}
				
	
	

