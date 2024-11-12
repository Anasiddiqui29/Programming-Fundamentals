#include <stdio.h>
#include <math.h>

int main()

{
	int x1 , x2 , y1 , y2 ;
	float dist;
	
	//taking first coordinates as input from user
	printf("Enter the x1 : ");
	scanf("%d", &x1);
	printf("Enter the y1 : ");
	scanf("%d", &y1);
	
	 //taking second coordinates as input from user
	printf("Enter the x2 : ");
	scanf("%d", &x2);
	printf("Enter the y2: ");
	scanf("%d", &y2);
	
	//calculating euclidean distance
	dist = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
	
	printf("The euclidean distance = %.1f", dist);
	
	
	
}
