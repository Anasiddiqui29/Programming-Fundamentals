#include <stdio.h>
#include <math.h>

int main()
{
	int n , s ;
	
	printf("Enter the size of an array: ");
	scanf("%d" , &n);
	
	int arr[n] , i ,sum = 0;
	
	for(i=0 ; i<n ; i++)
	{
		printf("Enter the number : ");
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the value of S: ");
	scanf("%d", &s);
	
	int start = 0 , maxindex , total = 0 ;
	
	i=0;
	while(total != s)
	{
		if(s>total)
		{
			total = total+arr[i] ;
			maxindex = i ;
		}
		
		else
		{
			total = total - arr[start];
			start++ ;
		}
		i++ ; 

	}
	printf("The Elements from Index %d to %d when summed results in the output of %d", start , maxindex , s);
}
