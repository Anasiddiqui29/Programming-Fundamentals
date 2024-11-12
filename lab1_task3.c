#include <stdio.h>

int main()

{
	int salary, sal_aft_tax, tax, tax_rate;
	
	// taking tax rate from the user
	printf("Enter the tax rate: "); 
	scanf("%d", &tax_rate); 
	
	// taking salary from the user 
	printf("Enter your salary: "); 
	scanf("%d", &salary); 
	
	// calculating the tax, the user has to pay
	tax = ((float)tax_rate / 100)*salary ; 
	
	// calculating the salary after tax
	sal_aft_tax = salary - tax ;
	printf("Your net income after tax deduction is = %d", sal_aft_tax);
	
}
