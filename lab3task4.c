#include <stdio.h>
#include <math.h>

int main()
{
	int nts , fsc ;
	
	printf("Enter your NTS marks : ");
	scanf("%d" ,&nts);
	printf("Enter your Fsc marks : ");
	scanf("%d", &fsc);
	
	if( fsc>70 )
	{
		printf("You have been selected for Oxford university\n");
		
		if( nts>70 )
		{
			printf("Department : IT\n ");
		}
		else
		{
			if( nts>60 )
			{
				printf("Department : Electronics\n");	
			}
			else
			{
				if ( nts >50)
				{
					printf("Department : Telecommunications\n");	
				}
				else
				{
					printf("Sorry!\n");
				}
			}
		}
	}
	else
	{
		if( fsc<=70 && fsc >=60 && nts == 50 )
		{
			printf("You have been selected for MIT university\n");
			printf("Department : IT\n");
			
		}
		else
		{
			if( fsc<60 && fsc>=50 && nts == 50)
			{
				printf("You have been selected for MIT university\n");
				printf("Department : Chemical\n");
			}
			else
			{
				if( fsc >40 && fsc<50 && nts == 50 )
				{
					printf("You have been selected for MIT university\n");
					printf("Department : Computer\n");
				}
				else
				{
					printf("Sorry!\n");
				}
			}
		}
	}
	
	
}
