#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	printf("Student ID : 23k-0575\n") ;
	printf("Name : Muhammad Anas Siddiqui") ;
	printf("\n") ;	
	
	//creating structure
	struct worker
	{
		char id[4];
		char f_name[20];
		char l_name[20];
		int salary;
		char j_Date[30];
		char dep[10];
	};
	
	// declaring structure array
	struct worker detail[8];
	
	// assigning values to the array
	strcpy(detail[0].id, "001");
	strcpy(detail[0].f_name, "Monika");
	strcpy(detail[0].l_name, "Arora");
	detail[0].salary = 100000;
	strcpy(detail[0].j_Date, "2014-02-20  09.00.00");
	strcpy(detail[0].dep, "HR");
	
	strcpy(detail[1].id, "002");
	strcpy(detail[1].f_name, "Niharika");
	strcpy(detail[1].l_name, "Verma");
	detail[1].salary = 80000;
	strcpy(detail[1].j_Date, "2014-06-11  09.00.00");
	strcpy(detail[1].dep, "Admin");
	
	strcpy(detail[2].id, "003");
	strcpy(detail[2].f_name, "Vishal");
	strcpy(detail[2].l_name, "Singhal");
	detail[2].salary = 300000;
	strcpy(detail[2].j_Date, "2014-02-20  09.00.00");
	strcpy(detail[2].dep, "HR");
	
	strcpy(detail[3].id, "004");
	strcpy(detail[3].f_name, "Amitabh");
	strcpy(detail[3].l_name, "Singh");
	detail[3].salary = 500000;
	strcpy(detail[3].j_Date, "2014-02-20  09.00.00");
	strcpy(detail[3].dep, "Admin");
	
	strcpy(detail[4].id, "005");
	strcpy(detail[4].f_name, "Vivek");
	strcpy(detail[4].l_name, "Bhati");
	detail[4].salary = 500000;
	strcpy(detail[4].j_Date, "2014-06-11  09.00.00");
	strcpy(detail[4].dep, "Admin");
	
	strcpy(detail[5].id, "006");
	strcpy(detail[5].f_name, "Vipul");
	strcpy(detail[5].l_name, "Diwan");
	detail[5].salary = 200000;
	strcpy(detail[5].j_Date, "2014-06-11  09.00.00");
	strcpy(detail[5].dep, "Account");
	
	strcpy(detail[6].id, "007");
	strcpy(detail[6].f_name, "Satish");
	strcpy(detail[6].l_name, "Kumar");
	detail[6].salary = 75000;
	strcpy(detail[6].j_Date, "2014-01-20  09.00.00");
	strcpy(detail[6].dep, "Account");
	
	strcpy(detail[7].id, "008");
	strcpy(detail[7].f_name, "Geetika");
	strcpy(detail[7].l_name, "Chauhan");
	detail[7].salary = 90000;
	strcpy(detail[7].j_Date, "2014-04-11  09.00.00");
	strcpy(detail[7].dep, "Admin");

	
	int i , j , max_hr = 0 , max_ad = 0 , max_acc = 0 , max_Indexhr , max_Indexad , max_Indexacc;
	
	char department[3][10] = {"HR" , "Admin" , "Account"} ;
	
	//calculating max salay for each department
	for(i=0 ; i<8 ; i++)
	{
		if(strcmp(detail[i].dep ,department[0] )==0)
		{
			if(detail[i].salary> max_hr) 
			{
				max_hr = detail[i].salary ;
				max_Indexhr = i ;
			}
		}
		if(strcmp(detail[i].dep ,department[1] )==0)
		{
			if(detail[i].salary> max_ad) 
			{
				max_ad = detail[i].salary ;
				max_Indexad = i	;
			}
		}
		if(strcmp(detail[i].dep ,department[2] )==0)
		{
			if(detail[i].salary> max_acc) 
			{
				max_acc = detail[i].salary ;
				max_Indexacc = i ;	
			}
		}
	}
	//printing details along with max salary
	printf("%s\t%s\t%s\t%d\t%s\t%s\n" , detail[max_Indexhr].id ,detail[max_Indexhr].f_name , detail[max_Indexhr].l_name , max_hr , detail[max_Indexhr].j_Date , detail[max_Indexhr].dep);
	printf("%s\t%s\t%s\t%d\t%s\t%s\n" , detail[max_Indexad].id ,detail[max_Indexad].f_name , detail[max_Indexad].l_name , max_ad , detail[max_Indexad].j_Date , detail[max_Indexad].dep) ;
	printf("%s\t%s\t%s\t%d\t%s\t%s\n" , detail[max_Indexacc].id ,detail[max_Indexacc].f_name , detail[max_Indexacc].l_name , max_acc , detail[max_Indexacc].j_Date , detail[max_Indexacc].dep) ;
	
	//B
	//initializing variables
	int hr_sum = 0 , ad_sum =0 , acc_sum =0 ;
	
	//calculating total salaries for each department
	for(i=0 ; i<8 ; i++)
	{
		if(strcmp(detail[i].dep ,department[0] )==0)
		{
			hr_sum = hr_sum + detail[i].salary ; 
		}
		if(strcmp(detail[i].dep ,department[1] )==0)
		{
			ad_sum = ad_sum + detail[i].salary ; 
		}
		if(strcmp(detail[i].dep ,department[2] )==0)
		{
			acc_sum = acc_sum + detail[i].salary ; 
		}
	}
	
	//printing total saslaries
	printf("HR : %d\n" , hr_sum) ;
	printf("Admin : %d\n" , ad_sum) ;
	printf("Account : %d" , acc_sum) ;
	
	
}
