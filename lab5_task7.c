#include <stdio.h>
#include <math.h>

int main()
{
	int arr[2][2] , arr2[2][2] ; 
	int i , j ;
	
	//taking input from the user
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter array 1 [%d][%d]: ", i , j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("Enter array 2 [%d][%d]: ", i , j);
			scanf("%d", &arr2[i][j]);
		}
	}
	//multiplying 2x2 matrix
	
	int arr3[2][2];
	
	arr3[0][0] = (arr[0][0] * arr2[0][0]) + (arr[0][1] * arr2[1][0]) ;
	arr3[0][1] = (arr[0][0] * arr2[0][1]) + (arr[0][1] * arr2[1][1]) ;
	arr3[1][0] = (arr[0][0] * arr2[0][0]) + (arr[1][1] * arr2[1][0]) ;	
	arr3[1][1] = (arr[1][0] * arr2[0][1]) + (arr[1][1] * arr2[1][1]) ;
	
	for(i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("%d ", arr3[i][j]);	
	
		}
	}
	
}
