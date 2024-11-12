#include <stdio.h>
#include <math.h>

int main()
{
	char coffee_type , cup_size ;
	int total_time ; 
	
	printf("Black Coffee (B) or White Coffee (W): ");
	scanf(" %c", &coffee_type);
	
	switch(coffee_type)
	{
		case 'B':
			printf("Choose cup size (Double(D) or Manual(M)) : ");
			scanf(" %c", &cup_size);
			printf("Put water : 20 minutes\n Sugar : 20 minutes \n Mix Well : 25 minutes\n Add coffee : 15 minutes \n Add milk : - \n Mix well : 25 minutes\n");
			if(cup_size == 'D')
			{
				total_time = (20 + 20 + 25 + 15 + 25)*1.5 ;
				printf("Total time = %d", total_time);
			}
			else
			{
				total_time = 20 + 20 + 25 + 15 + 25 ;
				printf("Total time = %d", total_time);
			}
			break ;
		case 'W' :
			printf("Choose cup size (Double(D) or Manual(M)) : ");
			scanf(" %c", &cup_size);
			printf("Put water : 15 minutes\n Sugar : 15 minutes \n Mix Well : 20 minutes\n Add coffee : 2 minutes \n Add milk : 4 minutes \n Mix well : 20 minutes\n");
			if(cup_size == 'D')
			{
				total_time = (15 + 15 + 20 + 2 + 4 + 20)*1.5 ;
				printf("Total time = %d", total_time);
			}
			else
			{
				total_time = 15 + 15 + 20 + 2 + 4 + 20 ;
				printf("Total time = %d", total_time);
			}
			break;
	}

}
