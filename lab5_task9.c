#include <stdio.h>
#include <math.h>

int main()
{
	int x , y, i , j , maxbill = 0 , max =0 , max_branchid = 0 ;
	
	//x= number of branches , y = number of mobile phones in each branch 
	
	printf("Enter the number of branches: ");
	scanf("%d", &x);
	
	int array[x][y] ;
	
	for(i=0 ; i<x ; i++)
	{
		printf("Enter the number of mobile phones for branch %d : " , i+1);
		scanf("%d",&y);
	
		for(j=0 ; j<y ; j++)
		{
			printf("Enter the bill of mobile phones %d for branch %d : ", j+1 , i+1);
			scanf("%d", &array[i][j]);
		}
 	}
	//calculating total bill for all branches and printing it
	int totalbill = 0 , tb_bill = 0 ;
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			totalbill = totalbill + array[i][j] ; 
		}
	}
	printf("Total bill : %d \n" , totalbill);
	
	//calculating total bill for each branch
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			tb_bill = tb_bill + array[i][j] ;
			
		}
		printf("Total bill for branch %d: %d \n", i+1 , tb_bill);
		tb_bill = 0 ;
	}
	
	//calculating and printing branch id where maximum bill arrived
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			if(tb_bill > maxbill )
			{
				maxbill = tb_bill;
				max_branchid = i +1 ;
					
			}	
			
		}	
	}	
	printf("Branch ID where maximum bill arrived: %d \n",max_branchid);
	
	//calculating and printing branch and phone ids where bill is the highest of all
	int mobileid = 0 , max_branchid2 = 0 ;
	for(i=0 ; i<x ; i++)
	{
		for(j=0 ; j<y ; j++)
		{
			if(array[i][j] > max)
			{
				max = array[i][j];
				mobileid = j+1 ;
				max_branchid2 = i +1 ;
			}
		}
	}
	printf("Branch is %d and phone ids where bill is the highest of all is %d \n", max_branchid2 , mobileid);
	
	
	
}
