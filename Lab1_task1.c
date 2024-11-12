#include <stdio.h>

int main()
{
	// setting variables
	int hours, distance, speed;
	 
	// taking input from the user
	printf("Enter the hours taken by the car:  ");
	scanf("%d",&hours);
	printf("Enter the total distance travelled by the car: ");
	scanf("%d", &distance);
	
	// calculating average speed
	speed = distance/hours;
	
	printf("Average speed = %d", speed);
}
