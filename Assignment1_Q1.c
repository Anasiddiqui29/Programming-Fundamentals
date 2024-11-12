#include <stdio.h>
#include <math.h>

int main()
{
	int row , column ;
	
	printf("Enter the number of batsman : ");
	scanf("%d", &row);
	printf("Enter the number of innings played by each batsman: ");
	scanf("%d", &column);
	
	int i , j , cric[row][column] ;
	
	//taking batting performance for each batsman in each innings from user
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			printf("Enter the runs scored in %d inning by batsman %d: ", j+1 , i+1);
			scanf("%d",&cric[i][j]);
		}
	}
	//total runs scored
	int totalruns = 0 ;
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			totalruns = totalruns + cric[i][j] ; 
		}
		printf("Total runs scored by batsman %d: %d \n", i+1 , totalruns);
		totalruns = 0 ;
	}
	//average runs per inning
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			totalruns = totalruns + cric[i][j] ; 
		}
		printf("Average runs scored by batsman %d: %d \n", i+1 , totalruns/column);
		totalruns = 0 ;
	}
	//highest score in a single innings
	int highscore ; 
	for(i=0 ; i<row ; i++)
	{
		highscore = cric[i][0];
		for(j=1 ; j<column ; j++)
		{
			if(cric[i][j]>highscore)
			{
				highscore = cric[i][j] ; 
			}
		}
		printf("The highest score by batsman %d : %d \n ", i+1,highscore);
	}
	//number of centuries 
	int count = 0 ;
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			if(cric[i][j]>=100)
			{
				count++ ;
			}
		}
		printf("The number of centuries scored by batsman %d : %d \n ", i+1 , count);
		count = 0 ;
	}
	//number of half centuries
	int count2 = 0 ;
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
			if(cric[i][j]>=50)
			{
				count2++ ;
			}
		}
		printf("The number of half centuries scored by batsman %d : %d \n ", i+1 , count2);
		count2 = 0 ;
	}
	
	
	
}
