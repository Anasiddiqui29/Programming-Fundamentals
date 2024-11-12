#include <stdio.h>
#include <math.h>

int main()
{
	int n, i ,j;
	
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value to be stored in an array: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		if(arr[i]==-1)
		{
			continue ;
		}
		int count = 1 ;
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[i]==arr[j])
			{
				count++ ;
				arr[j]= -1 ;
			}
		}
		
		printf("Frequency of %d = %d \n",arr[i],count);
	}
	
}
