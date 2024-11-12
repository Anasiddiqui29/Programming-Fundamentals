#include <stdio.h>
#include <math.h>

int main()
{
	int n ,i , temp , j ;
	printf("Enter the size of an array: ");
	scanf("%d" , &n);
	
	int arr[n] ; 
	
	//taking input from the user
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the number: ");
		scanf("%d" , &arr[i]);	
	}
	//displaying array
	for(i=0 ; i<n ; i++)
	{
		printf("%d ,",arr[i]);
	}
	
	//sorting 
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];  
				arr[i] = arr[j];
				arr[j] = temp ;
			}
		}
		printf("%d , ", arr[i]);
	}
	
}
