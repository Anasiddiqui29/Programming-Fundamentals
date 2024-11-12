#include <stdio.h>
#include <math.h>

int main()
{
	int d , start , end , n , i ;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	
	int array[n] ;
	
	
	printf("Enter the value of d: ");
	scanf("%d", &d);
	
	for(i= 0 ; i<n ; i++)
	{
		printf("Enter the values to be stored in the array: ");
		scanf("%d", &array[i]);
	}
	
	int shiftedarr[n] ; 
	
	for(i=0 ; i<n ; i++)
	{
		int newPosition = (i+d)%n ; 
		shiftedarr[newPosition] = array[i];
	}
	
	for (i = 0; i < n; i++) {
        printf("%d, ", shiftedarr[i]);
    }

		
}

