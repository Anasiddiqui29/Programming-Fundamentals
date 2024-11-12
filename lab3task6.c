#include <stdio.h>
#include <math.h>

int main()
{
	int item_no, quantity ,cost1 , cost2 ,cost3 ,cost4 ;
	char item1 , item2 , item3 , item4;
	
	printf("B = Burger (Rs 200)\n");
	printf("F = French Fries (Rs 50)\n");
	printf("P = Pizza (Rs 500)\n");
	printf("S = Sandwiches (Rs 150)\n");
	
	printf("How many types of snacks you need to order : ");
	scanf("%d" , &item_no);
	
	switch(item_no)
	{
		case 2 :
			printf("Enter the first snack you want to order : ");
			scanf(" %c", &item1);
			
			switch(item1)
			{
				case 'B':
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost1 = quantity*200;
					break;
				case 'F' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost1 = quantity*50;
					break;
				case 'P' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost1 = quantity*500;
					break;					
				case 'S' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost1 = quantity*150;
					break;
				default:
					printf("Invalid Input");
					
			}
			printf("Enter the second snack you want to order : ");
			scanf(" %c", &item2);
			
			switch(item2)
			{
				case 'B':
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost2 = quantity*200;
					break;
				case 'F' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost2 = quantity*50;
					break;
				case 'P' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost2 = quantity*500;
					break;					
				case 'S' :
					printf("Enter the quantity: ");
					scanf("%d", &quantity);
					cost2 = quantity*150;
					break;
				default:
					printf("Invalid Input");
			}
			printf("--------------------------------------------------------------------------------------------------\n");
			printf("You have ordered \n");
			printf("%c (s) value %d PKR\n ",item1, cost1);
			printf("%c (s) value %d PKR \n",item2, cost2);
			printf("Total = %d \n",cost1+cost2);
			printf("Thank you for your order... have a nice day.");
			
			break;
		
			
			case 3 :
				printf("Enter the first snack you want to order : ");
				scanf(" %c", &item1);
			
				switch(item1)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
				printf("Enter the second snack you want to order : ");
				scanf(" %c", &item2);
			
				switch(item2)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
				printf("Enter the third snack you want to order : ");
				scanf(" %c", &item3);
				
				switch(item3)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
			printf("--------------------------------------------------------------------------------------------------\n");
			printf("You have ordered \n");
			printf("%c (s) value %d PKR \n ",item1, cost1);
			printf("%c (s) value %d PKR\n ",item2, cost2);
			printf("%c (s) value %d PKR \n",item3, cost3);
			printf("Total = %d \n",cost1+cost2+cost3);
			printf("Thank you for your order... have a nice day.");
				
			break ;
		
			
			case 4 :
				printf("Enter the first snack you want to order : ");
				scanf(" %c", &item1);
			
				switch(item1)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost1 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
				printf("Enter the second snack you want to order : ");
				scanf(" %c", &item2);
			
				switch(item2)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost2 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
				printf("Enter the third snack you want to order : ");
				scanf(" %c", &item3);
				
				switch(item3)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost3 = quantity*150;
						break;
					default:
						printf("Invalid Input");
				}
				printf("Enter the fourth snack you want to order : ");
				scanf(" %c", &item4);
				switch(item4)
				{
					case 'B':
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost4 = quantity*200;
						break;
					case 'F' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost4 = quantity*50;
						break;
					case 'P' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost4 = quantity*500;
						break;					
					case 'S' :
						printf("Enter the quantity: ");
						scanf("%d", &quantity);
						cost4 = quantity*150;
						break;
					default:
						printf("Invalid Input");
					
				}
			printf("--------------------------------------------------------------------------------------------------\n");
			printf("You have ordered \n");
			printf("%c (s) value %d PKR \n",item1, cost1);
			printf("%c (s) value %d PKR \n",item2, cost2);
			printf("%c (s) value %d PKR \n",item3, cost3);	
			printf("%c (s) value %d PKR \n",item4, cost4);
			printf("Total = %d\n",cost1+cost2+cost3+cost4);
			printf("Thank you for your order... have a nice day.");
			
			break ;
		default:
			printf("Invalid Input");
				
			
				
			
	}
	
}
