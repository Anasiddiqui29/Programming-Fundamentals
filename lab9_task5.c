#include <stdio.h>
#include <string.h>

int main()
{
	//nested structure
	struct organization
	{
		char organization_name[20] ;
		char organization_number[20] ;
		
		struct employee 
		{
			int employee_id ;
			char name[20] ;
			int salary ;
		} emp ;
		
	} org;
	
	//storing details
	strcpy(org.organization_name ,"NU-Fast" );
	strcpy(org.organization_number , "NUFAST123ABC") ;
	org.emp.employee_id = 127 ;
	strcpy(org.emp.name , "Linus Sebastian") ;
	org.emp.salary = 400000 ; 
	
	//printing the details 
	printf("The size of the structure organization : %d \n" , sizeof(org)) ;
	printf("Organization name : %s \n" , org.organization_name) ;
	printf("Oraganization number: %s \n", org.organization_number) ;
	printf("Employee id: %d \n",org.emp.employee_id) ;
	printf("Employee name : %s \n" , org.emp.name);
	printf("Employee salary : %d \n" , org.emp.salary) ;
}
