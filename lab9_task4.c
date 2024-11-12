#include <stdio.h>
#include <string.h>

int main()
{
	struct employee
	{
		char name[20] ;
		int salary ;
		int hours ;
	} ;
	
	struct employee data[10] =
	{
		{"Ilyas" , 5000 , 8},
		{"Safdar" , 10000 , 8},
		{"Mukesh" , 4000 , 10},
		{"Ozaan" , 9000, 13},
		{"Ali" , 4500 , 10},
		{"Sara" , 12000 , 8},
		{"Kapil" , 24000 , 12},
		{"Devgan" , 32000 , 10},
		{"Kritri" , 12000 , 8},
		{"Uzair" , 15000 , 12}
	} ;
	
	int i ;
	for(i=0 ; i<10 ; i++)
	{
		if(data[i].hours==8)
		{
			printf("Name : %s \n" , data[i].name) ;
			printf("New salary: %d \n" , data[i].salary + 50) ;
			
		}
		else
		{
			if(data[i].hours==10)
			{
				printf("Name : %s \n" , data[i].name) ;
				printf("New salary: %d \n" , data[i].salary + 100) ;
			}
			else
			{
				printf("Name : %s \n" , data[i].name) ;
				printf("New salary: %d \n" , data[i].salary + 150) ;
			}
		}
		
	}
	
	
	
}
