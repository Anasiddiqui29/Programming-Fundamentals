#include <stdio.h>
#include <math.h>

int main()
{
	int matrix[4][4] , i , j ,x ,y ;
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			printf("Enter the value at [%d][%d]: ", i , j);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	//finding largest square matrix 
	int maxDimension = 0 ;
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<4 ; j++)
		{
			if(matrix[i][j]==1)
			{
				int count = 1;
				
				while(i+count<4 && j+count <4)
				{
					int issquare = 1 ;
					for(x=i ; x<=i+count ; x++)
					{
						for(y=j ; y<=j+count ; y++)
						{
							if(matrix[x][y]==0)
							{
								issquare = 0 ;
								break ; 
							}
						}
						if(!issquare)
						{
							break ; 
						}
					}
					if(issquare)
					{
						count++ ; 
					}
					else
					{
						break ; 
					}
				}
				if(count>maxDimension)
				{
					maxDimension=count ;
				}	
			}	
		}	
	}
	//printing dimensions
	if(maxDimension> 0 )
	{
		printf("Dimension of largest matrix %d x %d ", maxDimension , maxDimension);
	}
	else
	{
		printf("No matrix found") ; 
	}	
}
