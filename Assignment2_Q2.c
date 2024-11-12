#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("Student ID : 23k-0575 \n") ;
	printf("Name : Muhammad Anas Siddiqui \n") ;
	printf("\n") ;
	
	//creating structure
	struct employee
	{
		char name[20] ; 
		char role[20] ;
		int communication ; 
		int teamwork ; 
		int creativity ; 
	}HR[5] , finance[5] , marketing[5] , logistics[5] ; 
	
	srand(time(NULL)) ;
	
	//storing random names in an array
	char names[20][20] = 
	{ "Kapil Dev" ,
	"Rohit Shetty" , 
	"Morty" , 
	"Rick" , 
	"Summer" , 
	"Ilyas" , 
	"Mohan lal" , 
	"Kumar" , 
	"Daniyal" , 
	"Alice" , 
	"Bob" , 
	"Smith" , 
	"Johnson" , 
	"Brown" , 
	"Diana" , 
	"Ciri" , 
	"Eva" , 
	"Charlie" , 
	"Sara khan" , 
	"Shakoor" } ;
	
	//storing roles in an array
	char roles[5][20] = 
	{"Director" ,
	"Executive" , 
	"Manager" , 
	"Employee" ,
	"Trainee"} ;
	
	int i ; 
	
	for(i=0 ; i<5 ; i++)
	{
		int randomNameIndex , randomRoleIndex ;
		
		//HR department
		 do {
            randomNameIndex = rand() % 20;
        } while (names[randomNameIndex][0] == '\0');
        strcpy(HR[i].name, names[randomNameIndex]);
        names[randomNameIndex][0] = '\0';
		
		
		randomRoleIndex = rand() % 5;
        strcpy(HR[i].role, roles[randomRoleIndex]);
        

        HR[i].communication = rand() % 101;
        HR[i].teamwork = rand() % 101;
        HR[i].creativity = rand() % 101; 
		
		//Finance department
		do 
		{
        	randomNameIndex = rand() % 20;
        } while (names[randomNameIndex][0] == '\0');
        strcpy(finance[i].name , names[randomNameIndex]);
        names[randomNameIndex][0] = '\0' ;
		
		randomRoleIndex = rand() % 5;
        strcpy(finance[i].role, roles[randomRoleIndex]);
		
		finance[i].communication = rand() % 101 ;
		finance[i].teamwork = rand() % 101;
        finance[i].creativity = rand() % 101; 
		
		//Marketing department
		do 
		{
        	randomNameIndex = rand() % 20;
        } while (names[randomNameIndex][0] == '\0');
        strcpy(marketing[i].name , names[randomNameIndex]);
        names[randomNameIndex][0] = '\0' ;
		
    	randomRoleIndex = rand() % 5;
        strcpy(marketing[i].role, roles[randomRoleIndex]);

		
		marketing[i].communication = rand() % 101 ;
		marketing[i].teamwork = rand() % 101;
        marketing[i].creativity = rand() % 101;
		
		//logistic department
		do 
		{
        	randomNameIndex = rand() % 20;
        } while (names[randomNameIndex][0] == '\0');
        strcpy(logistics[i].name , names[randomNameIndex]);
        names[randomNameIndex][0] = '\0' ;
		
        randomRoleIndex = rand() % 5;
        strcpy(logistics[i].role, roles[randomRoleIndex]);
		
		logistics[i].communication = rand() % 101 ;
		logistics[i].teamwork = rand() % 101;
        logistics[i].creativity = rand() % 101;	
	}
	
	//calculating total sum of values for each employee
	int sum_hr = 0 , sum_fn = 0 , sum_mark = 0 , sum_log = 0 ;
	for(i=0 ; i<5 ; i++)
	{
		sum_hr = sum_hr + HR[i].communication + HR[i].teamwork + HR[i].creativity ;
		sum_fn = sum_fn + finance[i].communication + finance[i].teamwork + finance[i].creativity ;
		sum_mark = sum_mark + marketing[i].communication + marketing[i].teamwork + marketing[i].creativity ;
		sum_log = sum_log + logistics[i].communication + logistics[i].teamwork + logistics[i].creativity ; 
	}
	//printing sum of each department
	printf("Sum of HR : %d\n" , sum_hr) ;
	printf("Sum of Finance: %d\n" , sum_fn) ;
	printf("Sum of Marketing: %d\n" , sum_mark) ;
	printf("Sum of logistics: %d\n" , sum_log) ;
	
	//finding best department and printing its details
	if(sum_hr>sum_fn && sum_hr>sum_mark && sum_hr>sum_log)
	{
		printf("Best Department: HR\n");
		for (i = 0; i < 5; i++)
   	 	{
        	printf("Employee %d Name: %s, Role: %s, Communication: %d, Teamwork: %d, Creativity: %d\n",
			i + 1, HR[i].name, HR[i].role, HR[i].communication, HR[i].teamwork, HR[i].creativity);
    	}
	}
	if(sum_fn>sum_hr && sum_fn>sum_mark && sum_fn>sum_log)
	{
		printf("Best Department: Finance\n") ;
		for (i = 0; i < 5; i++)
    	{
       		printf("Employee %d Name: %s, Role: %s, Communication: %d, Teamwork: %d, Creativity: %d\n",
			i + 1, finance[i].name, finance[i].role, finance[i].communication, finance[i].teamwork, finance[i].creativity);
    	}
	}
	if(sum_mark>sum_hr && sum_mark>sum_fn && sum_mark>sum_log)
	{
		printf("Best Department: Marketing\n");
		for (i = 0; i < 5; i++)
    	{
       		printf("Employee %d Name: %s, Role: %s, Communication: %d, Teamwork: %d, Creativity: %d\n",
			i + 1, marketing[i].name, marketing[i].role, marketing[i].communication, marketing[i].teamwork, marketing[i].creativity);
    	}
	}
	if(sum_log>sum_hr && sum_log>sum_fn && sum_log>sum_mark)
	{
		printf("Best Department: Logistics\n");
		for (i = 0; i < 5; i++)
    	{
       		printf("Employee %d Name: %s, Role: %s, Communication: %d, Teamwork: %d, Creativity: %d\n",
			i + 1, logistics[i].name, logistics[i].role, logistics[i].communication, logistics[i].teamwork, logistics[i].creativity);
    	}
	}
} 
