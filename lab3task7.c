#include <stdio.h>
#include <math.h>

int main()
{
	unsigned int acc_num , mortage_amt , mortage_term , monthly_amount;
	float interest_rate , interest_payable ,total_amount_payable   ; 
	
	printf("Enter account number : ");
	scanf("%u", &acc_num);
	printf("Enter mortage amount(in dollars): ");
	scanf("%u", &mortage_amt);
	printf("Enter mortage term(in years): ");
	scanf("%u",&mortage_term);
	printf("Enter interest rate(as a decimal): ");
	scanf("%f", &interest_rate);
	
	interest_payable = mortage_amt * interest_rate * mortage_term ;
	total_amount_payable = mortage_amt + interest_payable;
	
	monthly_amount = total_amount_payable /(mortage_term*12);
	
	printf("The monthly payable interest is : $ %d", monthly_amount);
		
}
