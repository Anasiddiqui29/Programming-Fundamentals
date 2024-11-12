#include <stdio.h>
#include <string.h>

int decideCarUsage(int car , int day)
{
	if(car%2==0 && day%2==0)
	{
		return 1 ;
	}
	else
	{
		if(car%2 !=0 && day%2 !=0)
		{
			return 1 ;
		}
		else
		{
			return 0 ;
		}
	}		
}

int main()
{
	int car , day ,result ;
	
	printf("Enter the car number: ");
	scanf("%d" , &car);
	
	printf("Enter the day of the week: ");
	scanf("%d",&day);
	
	result=decideCarUsage(car , day);
	
	if(result==1)
	{
		printf("You can use car");
	}
	else
	{
		printf("You cannot use car");
	}
	
}
