#include <stdio.h>
#include <string.h>

int main()
{
	struct box 
	{
		int length ;
		int width ;
		int height ;
	} Box[4] ;
	
	int tunnel_height = 41 , i; 
	
	for(i=0 ; i<4 ; i++)
	{
		printf("Enter the length of box %d: " , i+1) ;
		scanf("%d", &Box[i].length) ; 
		printf("Enter the width of box %d: ",i+1) ;
		scanf("%d" , &Box[i].width) ; 
		printf("Enter the height of the box %d: " , i+1) ; 
		scanf("%d" , &Box[i].height) ;
	}
	
	for(i=0 ; i<4 ; i++)
	{
		if(Box[i].height<tunnel_height)
		{
			printf("Box %d can be passed easily \n" , i+1) ;
			int volume ; 
			volume = Box[i].length * Box[i].width * Box[i].height ;
			printf("Volume of this box : %d \n" , volume) ;
		}
		else
		{
			printf("Box %d cannot be passed \n" , i+1) ;
		}
	}
}

