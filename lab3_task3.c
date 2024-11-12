#include <stdio.h>
#include <math.h>
int main()
{
	int item_price;
	float final_price , amount_saved;
	printf("Enter the item price : \n");
	scanf("%d" , &item_price);
	
	if(item_price < 2000)
	    {
	    	printf("No discount for you \n");
		}
	else 
	    {
	    	if(item_price>=2000 && item_price <=4000)
	    	    {
	    	    	final_price = 0.8*item_price;
					amount_saved = item_price - final_price;
	    	    	printf("The actual amount: %d \n Total amount saved : %.2f \n Your item price after 20%% discount : %.2f \n " ,item_price, amount_saved ,final_price);
				}	
			else 
			    {
			    	if(item_price>4000 && item_price <=6000)
	    	            {
	    	            	final_price = 0.3*item_price;
							amount_saved = item_price - final_price;
	    	    	    	printf("The actual amount: %d \n Total amount saved: %.2f \n Your item price after 30%% discount : %.2f \n " ,item_price, amount_saved ,final_price);
				        }
					else
						{
							if(item_price > 6000)
								{
									final_price = 0.5*item_price;
									amount_saved = item_price - final_price;
									printf("The actual amount: %d \n Total amount saved : %.2f \n Your item price after 50%% discount : %.2f \n " ,item_price, amount_saved ,final_price);
								}
						}
			    }
		}
}