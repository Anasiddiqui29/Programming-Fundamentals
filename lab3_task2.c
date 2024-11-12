#include <stdio.h>
#include <math.h>
int main()
{
	int pos_A , pos_B , pos_sheep ;
	unsigned int distance_A , distance_B;
	//taking input from the user 
	printf("Enter the position of wolf A: ");
	scanf("%d", &pos_A);
	printf("Enter the position of wolf B: ");
	scanf("%d", &pos_B);
	printf("Enter the position of sheep: ");
	scanf("%d", &pos_sheep);
	
	distance_A = fabs(pos_sheep - pos_A) ;
	distance_B = fabs(pos_sheep - pos_B) ;
	
	if (distance_A > distance_B)
	    {
	    	printf("Wolf B");
	    }
	else		
		{
			if (distance_A < distance_B)
			    {
			    	printf("Wolf A");
				}
			else 
	            {
	    	printf("Wolves distracted , sheep escaped");
		        } 	
	    }
	  
				
}