#include <stdio.h>
#include <string.h>

int main()
{
	struct Date 
	{
		int day ; 
		int month ;
		int year ; 
	} date ;
	
	//date format day/month/year
	//taking input from the user
	printf("Enter the day(1-30): ");
	scanf("%d" , &date.day) ;
	printf("Enter the month: ") ; 
	scanf("%d" , &date.month) ;
	printf("Enter the current year: ");
	scanf("%d" , &date.year) ; 
	
	//Adding 45 days
	date.day = date.day + 45 ;
	
	//adjusting month
	if(date.day>30)
	{
		date.day = date.day - 30 ;
		date.month++ ; 
	}
	
	if(date.month>12)
	{
		date.month = date.month - 12 ;
		date.year++ ; 
	}
	
	printf("New date \n") ;
	printf("%d/" , date.day) ;
	printf("%d/" , date.month) ;
	printf("%d" , date.year) ;
	
}
