#include <stdio.h>
#include <math.h>

int main()
{
	int a ,b , i;
	
	printf("Enter the value of a :");
	scanf("%d", &a);
	printf("Enter the value of b: ");
	scanf("%d", &b);
	
	if(a<=9)
	{
		for(a ; a<=9 ; a++)
		{
			if(a==0)
			{
				printf("zero\n");
			}
			else
			{
				if(a==1)
				{
					printf("One\n");
				}
				else
				{
					if(a==2)
					{
						printf("two\n");
					}
					else
					{
						if(a==3)
						{
							printf("Three\n");
						}
						else
						{
							if(a==4)
							{
								printf("four\n");
							}
							else
							{
								if(a==5)
								{
									printf("five\n");
								}
								else
								{
									if(a==6)
									{
										printf("Six\n");
									}
									else
									{
										if(a==7)
										{
											printf("seven\n");
										}
										else
										{
											if(a==8)
											{
												printf("eight\n");
											}
											else
											{
												printf("nine\n");
											}
										}
									}
								}
							}
						}
					}
						
				}
			}
						
		}
	}
					
	for(i=a ; i<=b ; i++ )	
	{
		if(i%2==0)
		{
			printf("Even\n");
		}
		else
		{
			if(i%2!=0)
			{
				printf("Odd\n");
			}
		}
			
	}			
					
					
					
				
			
		
	
	
	
	
	
	
}
