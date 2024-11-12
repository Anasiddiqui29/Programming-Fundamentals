#include <stdio.h>
#include <math.h>

int main()
{
	int flight[5][2] = {
	{300 , 0},
	{320 , 310},
	{0 , 280},
	{380 , 0},
	{375 , 400},
	};
	
	//1
	int highchance = 0 , i, j ,day ,day2 ,  slot ;
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			if(flight[i][j]!=0 && flight[i][j]<300)
			{
				highchance = 1 ;
				day = i ;
				slot = j ;
			}		
		}
			
	} 
	char dayNames[][15] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    char slotNames[][10] = { "Morning", "Evening" };

	
	if(highchance==1)
	{
		printf("Highest chance to book flight on %s in %s \n", dayNames[day],slotNames[slot]);
	}	
	
	//2
	//printing days available
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<1 ; j++)
		{
			if(flight[i][j]!=0)
			{
				day = i;
				printf("Day available for morning flight: %s \n" , dayNames[day]);
			}
		}
	}
	
	//printing best day to travel in morning slot
	for(i=0 ; i<5 ; i++)
	{
		for(j=0 ; j<1 ; j++)
		{
				if(flight[i][j]!=0 && flight[i][j]<=300)
			{
				day2 = i ;
				printf("Best day to travel in morning slot: %s \n" , dayNames[day2]);
			}
		}
	}	
	
	//3
	//printing days available
	for(i=0 ; i<5 ; i++)
	{
		for(j=1 ; j<2 ; j++)
		{
			if(flight[i][j]!=0)
			{
				day = i;
				printf("Day available for evening flight: %s \n" , dayNames[day]);
			}
		}
	}
	
	//printing best day to travel in morning slot
	for(i=0 ; i<5 ; i++)
	{
		for(j=1 ; j<2 ; j++)
		{
				if(flight[i][j]!=0 && flight[i][j]<=300)
			{
				day2 = i ;
				printf("Best day to travel in evening slot: %s \n" , dayNames[day2]);
			}
		}
	}
	
	//4
	int dayy ;
	printf("Enter the day you want to inquire about flight(0 for Monday , 1 for tuesday , 2 for wednesday , 3 for thursday , 4 for friday): ");
	scanf("%d", &dayy);
	
	
	for(j=0 ; j<2 ; j++)
	{
		for(i=0 ; i<5 ; i++)
		{
			if(dayy==i)
			{
				if(flight[i][j]!=0)
				{
				printf("The flight is available for %s \n " , slotNames[j]);
				printf("The price for the ticket is : %d \n",flight[i][j]);	
				}
			}
			if(dayy==i)
			{
				if(flight[i][j]==0)
				{
					printf("The flight is not available for %s \n",slotNames[j]);
				}
			}
		}
}	
		
		
	
	
	
	
	
	
}
