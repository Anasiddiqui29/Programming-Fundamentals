#include <stdio.h>
#include <string.h>

//creating function 
float calculateDiscount(int visit , float amount)
{
	float discount ;
	
	if(visit>10 && amount>=50.00)
	{
		discount = 0.15*amount ;
	}
	else
	{
		if(visit>5 && amount>=30.00)
		{
			discount = 0.10*amount ; 
		}
		else
		{
			discount = 0 ;
		}
	}
	return discount ;
}

int main()
{
	int visit , amount ; 
	float discountprice ;
	
	//taking input from the user
	printf("Enter the number of time you have visited this month: ");
	scanf("%d",&visit);
	printf("Enter the totala amount: ");
	scanf("%d",&amount);
	
	//calling function
	discountprice = calculateDiscount(visit , amount) ;
	
	//printing discounted price
	printf("Your disocunt price: %.2f" , discountprice);	
}
