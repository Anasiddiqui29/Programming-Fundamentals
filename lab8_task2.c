#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n ; 
	
	//taking input from the user
	printf("Enter the value of N (size of an array) : ");
	scanf("%d" , &n) ; 
	
	//allocate memory
	int *ptr = (int*)malloc(n*sizeof(int)) ;
	int i ;
	
	//taking array as an input from user
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value of array[%d]: ",i);
		scanf("%d",&ptr[i]);
		
	}
	printf("Array before resizing \n") ;
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",*(ptr+i)) ; 
	}
	
	printf(" \nEnter the new size of an array: ");
	scanf("%d",&n);
	
	//reallocate memory
	ptr = (int*)realloc(ptr,n*sizeof(int)) ;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter value of an array[%d]: ",i);
		scanf("%d",&ptr[i]);
	}

	printf("\nArray after resizing") ; 

	for(i=0 ; i<n ; i++)
	{
		printf("%d " , *(ptr+i)) ;
	}
	
	//finding the 2nd lowest value in the array
	int lowest , lowest2 ;
	for(i=0 ; i<n ; i++)
	{
		if(i==0)
		{
			lowest = *(ptr+i) ;
		}
		if(lowest>*(ptr+i))
		{
			lowest = *(ptr+i) ; 
		}
	}
	//2nd lowest
	for(i=0; i<n ; i++)
	{
		if(*(ptr+i)==lowest)
		{
			continue ;
		}
		else
		{
			if(i==0)
			{
				lowest2 = *(ptr+i) ;
			}
			if(lowest2>*(ptr+i))
			{
				lowest2 = *(ptr+i) ; 
			}
		}
	}
	
	printf("The second lowest in the array is %d \n",lowest2) ;
	
	//freeing allocated memory
	free(ptr) ;
	
}
