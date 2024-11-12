#include <stdio.h>
#include <math.h>

int main()
{
	int n ,t ,j;
	
	printf("Enter the value of t: ");
	scanf("%d" , &t);
	
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	
	int arr[n] , i;
	
	for(i = 0 ; i<n ; i++ )
	{
		printf("Enter the value at %d: ",i);
		scanf("%d", &arr[i]);
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=i+1 ; j<n ; j++)
		{
			if(arr[i]+arr[j]==t)
			{
				printf("%d , %d \n",arr[i],arr[j]);
			}
		}
	}
	
	
	
}
