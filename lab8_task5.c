#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int * findIntersection(int arr1[] , int arr2[] , int size1 , int size2, int*count) ;

int main()
{
	int size1 , size2 ;
	
	printf("Enter the size of array 1: ");
	scanf("%d", &size1) ;
	printf("Enter the size of array 2: ");
	scanf("%d", &size2) ;
	
	int arr1[size1] , arr2[size2] ,i,count=0;
	
	//taking array input from the user
	for(i=0 ; i<size1 ; i++)
	{
		printf("Enter the value of array1[%d]: " ,i);
		scanf("%d",&arr1[i]) ;
	}
	for(i=0 ; i<size2 ; i++)
	{
		printf("Enter the value of array2[%d]: ",i);
		scanf("%d",&arr2[i]) ;
	}
	
	int *res = findIntersection(arr1 , arr2 , size1 , size2, &count);
	
	if(res==NULL)
	{
		printf("No intersection found") ;
	}
	else
	{
		printf("Intesection elements found\n");
		for(i=0 ; i<count ; i++)
		{
			printf("%d ", *(res+i));
		}
		
	}
	free(res); //freeing dynamic allocated memory
	
}

int * findIntersection(int arr1[] , int arr2[] , int size1 , int size2 , int * count) 
{
	int i , j ,cnt = 0 ;
	//finding common elements
	for(i=0 ; i<size1 ; i++)
	{
		for(j=0 ; j<size2 ; j++)
		{
			if(arr1[i]==arr2[j])
			{
				cnt++ ; 
			}
		}
	}
	
	*count = cnt ;
	
	//memory allocation for 3rd array
	int *ptr = (int*)malloc(cnt*sizeof(int)) ;
	
	int index = 0 ;
	//strong common elements into array using DMA
	for(i=0 ; i<size1 ; i++)
	{
		for(j=0 ; j<size2 ; j++)
		{
			if(arr1[i]==arr2[j])
			ptr[index++] = arr1[i] ;
		}
	
	}
	if(cnt==0)
	{
		return NULL ; 
	}
	else
	{
		return  ptr ;
	}
	
}
