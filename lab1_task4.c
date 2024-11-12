#include <stdio.h>

int main()
{
	// creating variables and r stands for reminder
	int pennies , r_quarter, r_dime, r_nickel , quarter, dime , nickel ; 
	 
	// calculating total quarters and printing it
	quarter = 368 / 25;
	printf("Quarter = %d\n", quarter);
	
	// calculating total dime by using mod function
	r_quarter = 368 % 25;
	dime = r_quarter / 10;
	printf("Dime = %d\n", dime);
	
	// calculating total quarter using mod function
	r_dime = r_quarter % 10 ; 
	nickel = r_dime / 5; 
	printf("Nickel = %d\n", nickel);
	
	// reminder of nickel will be the pennies 
	r_nickel = r_dime % 5 ; 
	printf("Pennies = %d\n ", r_nickel);
	
	
}
