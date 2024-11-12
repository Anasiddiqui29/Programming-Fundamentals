#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int  i , j , row , column ;
	
	//taking rows and column from user
	printf("Enter the number of rows: ");
	scanf("%d" , &row) ; 
	printf("Enter the number of columns: ") ; 
	scanf("%d" , &column) ;
	
	//dynamically allocated memory for array of pointers
	int **ptr  = (int**) calloc(row,sizeof(int*)) ; 
	
	for(i= 0 ; i<row ; i++)
	{
		*(ptr+i) = (int*) calloc(column,sizeof(int));
	}
	
	//taking input from the user using pointers
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			printf("Enter the value of array[%d][%d]: ",i,j);
			scanf("%d" , (*(ptr+i)+j)); //calculates the address of ith row in 2D array where ptr is pointer to pointer(Not dereferencing)
		}
	}
	
	//for sum of individual row
	int sum = 0 ;
	for(i=0 ; i<row ;i++ )
	{
		sum = 0 ; //resets the sum for each row
		for(j=0 ; j<column ; j++)
		{
			sum = sum + *(*(ptr+i)+j) ;
		}
		printf("Row %d sum = %d ",i , sum) ;
		printf("\n\n") ;
	}
	
	//for sum of individual column
	for(j=0 ; j<column ;j++ )
	{
		sum = 0 ; //resets the sum for each column
		for(i=0 ; i<column ; i++)
		{
			sum = sum + *(*(ptr+j)+i) ;
		}
		printf("Column %d sum = %d ",j , sum) ;
		printf("\n\n") ;
	}
	//freeing allocated memory
	for(i = 0 ; i<row ; i++)
	{
		//free each row
	 	free(*(ptr+i)); //or free(ptr[i])
	}
	
	free(ptr) ; 
}
