#include <stdio.h>
#include <math.h>
int main()
{
	int choice;
	float num1 , num2 ;
	printf("Enter the number 1 : ");
	scanf("%f" , &num1);
	printf("Enter the number 2: ");
	scanf("%f" , &num2);
	
	printf("Press \n 1 for sum \n 2 for subraction \n 3 for multiplication \n 4 for division \n");
	scanf("%d", &choice);
	
	switch (choice) 
        { 
		case 1 :
        	printf("Sum = %.2f" , num1 + num2);
        	break;
        case 2 :
        	printf("Subraction = %.2f" , num1 - num2);
        	break;
        case 3 :
        	printf("Multiplication = %.2f" , num2 * num1);
        	break;
        case 4 :
        	printf("Division = %.2f" , num1/num2);
        	break;
        default :
        	printf("Enter valid choice\n");
        	
	}
	
	
			
	
	
}