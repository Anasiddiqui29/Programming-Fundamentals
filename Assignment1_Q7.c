#include <stdio.h>
#include <math.h>

int main()
{
	//creating 2D array where row represents age and column represent shirt price
	int shirt[5][5]={
	{500,200,4000,1000,600},
	{100,750,5000,500,700},
	{50,650,8000,7000,500},
	{600,200,50,100,800},
	{500,200,400,10000,900},
	};
	
	int temp ,i,j,x;
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			for(x=j+1; x<5 ; x++)
			if(shirt[i][j]<shirt[i][x])
			{
				temp = shirt[i][j];
				shirt[i][j]=shirt[i][x] ;
				shirt[i][x] = temp ;
			}
		}
	}
	//printing sorted list
	printf("The sorted list is as follows according to the price\n");
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<5 ; j++)
		{
			printf("%d,",shirt[i][j]);
		}
		printf("\n");
	}
	
	
}
