#include <stdio.h>
#include <string.h>

int main()
{
	struct Date 
	{
		char day[10] ;
		char month[10] ;
		int year ; 
	} ;
	
	struct Date date1, date2 ;
	
	//taking input for date 1
	printf("Enter the day of date 1: ") ; 
	scanf("%s",date1.day) ;
	
	printf("Enter the month of date 1: ") ;
	scanf("%s",date1.month) ;
	
	printf("Enter the year of date 1: ");
	scanf("%d" , &date1.year) ;
	
	//taking input for day 2
	printf("Enter the day of date 2: ") ; 
	scanf("%s",date2.day) ;
	
	printf("Enter the month of date 2: ") ;
	scanf("%s",date2.month) ;
	
	printf("Enter the year of date 2: ");
	scanf("%d" , &date2.year) ;
	
	//comapring 
	if(strcmp(date1.day , date2.day)==0 && strcmp(date1.month , date2.month)==0 && date1.year==date2.year)
	{
		printf("Dates are equal") ;
	}
	else
	{
		printf("Dates are not equal") ;
	}
	
	
		
	
}
