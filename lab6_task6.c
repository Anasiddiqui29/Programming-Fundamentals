#include <stdio.h>
#include <string.h>

int processArray(int num[] , int n )
{
	int i ,sum = 0 ,max ,curr ,j ,maxIndex ;
	
	for(i=0 ; i<n ; i++)
	{
		sum = sum + num[i] ;	
	}
	
	for(i=1; i<n ; i++)
	{
		max = num[0] ; 
		if(num[i]>max)
		{
			max = curr ;
			maxIndex = i;
		}
	}
	
	
	//removing the maximum value
	int curr1 , max1 ;
	for(j=maxIndex ; j<n-1 ; j++)
	{
		num[j] = num[j+1];
	}
	n-- ;
	
	//finding second maximum value
	for(i=1 ; i<n ; i++)
	{			
		max1 = num[0];
		if(num[i]>max1)
		{
			max1 = num[i] ;
		}
		
 
	}
	return max1 ;
	
		
}

int main()
{
	int n ,i ,res ,sum=0;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the value at array: ");
		scanf("%d",&arr[i]);
	}
	
	res = processArray(arr , n);
	
	printf("The second max value: %d " , res) ;
	
	//calculating sum and printing it
	for(i=0 ; i<n ; i++)
	{
		sum = sum + arr[i] ;	
	}
	printf("Array Sum: %d \n",sum) ;	
}
