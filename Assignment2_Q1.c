#include <stdio.h>
#include <string.h>

//function to find max value from 2x2 matrix
int max_matrix(int value_1 , int value_2 , int value_3 , int value_4)
{
	int max = value_1;

    if (value_2 > max) {
        max = value_2;
    }
    if (value_3 > max) {
        max = value_3;
    }
    if (value_4 > max) {
        max = value_4;
    }

    return max;
}

int main()
{
	printf("Student ID : 23k-0575\n") ;
	printf("Name : Muhammad Anas Siddiqui") ;
	printf("\n") ;
	
	int choice ; 
	
	//taking input from the user
	printf("\nPress 1 for 2x2\nPress 2 for 4x4\nPress 3 for 4x4\n") ;
	printf("Choose the size of matrix: ") ;
	
	scanf("%d" , &choice) ; 
	
	//declaring matrix of all 3 sizes
	int matrix1[2][2] , i , j ;
	int matrix2[4][4] ;
	int matrix3[8][8] ;
	
	switch(choice)
	{
		case 1 :
	
			for(i=0 ; i<2 ; i++)
			{
				for(j=0 ; j<2 ; j++)
				{
					printf("Enter the value at [%d][%d]: ",i,j); //taking input from the user (in this case student ID)
					scanf("%d" , &matrix1[i][j]);
				}
			}
			//passing values from the matrix to the function
			int ress1 = max_matrix(matrix1[0][0] , matrix1[0][1] , matrix1[1][0] , matrix1[1][1]) ;
			
			printf("%d" , ress1) ;
			break ; 
		
		case 2 : 
			
			for(i=0 ; i<4 ; i++)
			{
				for(j=0 ; j<4 ; j++)
				{
					printf("Enter the value at [%d][%d]: ",i,j); //taking input from the user (in this case student ID)
					scanf("%d" , &matrix2[i][j]) ;
				}
			}
			//passing values from the matrix to the function
			int res1 = max_matrix(matrix2[0][0] , matrix2[0][1] , matrix2[1][0] , matrix2[1][1]) ; 
			int res2 = max_matrix(matrix2[0][2], matrix2[0][3], matrix2[1][2], matrix2[1][3]) ;
			int res3 = max_matrix(matrix2[2][0], matrix2[2][1], matrix2[3][0], matrix2[3][1]);
			int res4 = max_matrix(matrix2[2][2], matrix2[2][3], matrix2[3][2], matrix2[3][3]) ;
			
			int ress2[2][2] ;
			
			//storing max values to the array
			ress2[0][0] = res1 ;
			ress2[0][1] = res2 ;
			ress2[1][0] = res3 ;
			ress2[1][1] = res4 ;
			
			for(i=0 ; i<2 ; i++)
			{
				for(j=0 ; j<2 ; j++)
				{
					printf("%d " ,ress2[i][j]) ; 
				}
				printf("\n") ;
			}
			break ; 
		
		case 3 :
			
			for(i=0 ; i<8 ; i++)
			{
				for(j=0 ; j<8 ; j++)
				{
					printf("Enter the value at [%d][%d]: ",i,j); //taking input from the user (in this case student ID)
					scanf("%d" , &matrix3[i][j]) ;
				}
			}
			//passing values from the matrix to the function 
			int res5 = max_matrix(matrix3[0][0] , matrix3[0][1] , matrix3[1][0] , matrix3[1][1]) ; 
			int res6 = max_matrix(matrix3[0][2], matrix3[0][3], matrix3[1][2], matrix3[1][3]) ;
			int res7 = max_matrix(matrix3[0][4] , matrix3[0][5] , matrix3[1][4] , matrix3[1][5]) ;
			int res8 = max_matrix(matrix3[0][6], matrix3[0][7], matrix3[1][6], matrix3[1][7]) ;
			int res9 = max_matrix(matrix3[2][0] , matrix3[2][1] , matrix3[3][0] , matrix3[3][1]) ; 
			int res10 = max_matrix(matrix3[2][2], matrix3[2][3], matrix3[3][2], matrix3[3][3]) ;
			int res11 = max_matrix(matrix3[2][4], matrix3[2][5], matrix3[3][4], matrix3[3][5]) ;
			int res12 = max_matrix(matrix3[2][6], matrix3[2][7], matrix3[3][6], matrix3[3][7]) ;
			int res13 = max_matrix(matrix3[4][0], matrix3[4][1], matrix3[5][0], matrix3[5][1]) ;
			int res14 = max_matrix(matrix3[4][2], matrix3[4][3], matrix3[5][2], matrix3[5][3]);
			int res15 = max_matrix(matrix3[4][4], matrix3[4][5], matrix3[5][4], matrix3[5][5]); 
			int res16 = max_matrix(matrix3[4][6], matrix3[4][7], matrix3[5][6], matrix3[5][7]);
			int res17 = max_matrix(matrix3[6][0], matrix3[6][1], matrix3[7][0], matrix3[7][1]);
			int res18 = max_matrix(matrix3[6][2], matrix3[6][3], matrix3[7][2], matrix3[7][3]);
			int res19 = max_matrix(matrix3[6][4], matrix3[6][5], matrix3[7][4], matrix3[7][5]);
			int res20 = max_matrix(matrix3[6][6], matrix3[6][7], matrix3[7][6], matrix3[7][7]);  
			
			int ress3[4][4] ;
			
			//storing max values to the array
			ress3[0][0] = res5 ;
			ress3[0][1] = res6 ; 
			ress3[0][2] = res7 ; 
			ress3[0][3] = res8 ;
			ress3[1][0] = res9 ;
			ress3[1][1] = res10 ; 
			ress3[1][2] = res11 ; 
			ress3[1][3] = res12 ;
			ress3[2][0] = res13 ;
			ress3[2][1] = res14 ; 
			ress3[2][2] = res15 ; 
			ress3[2][3] = res16 ;
			ress3[3][0] = res17 ;
			ress3[3][1] = res18 ; 
			ress3[3][2] = res19 ; 
			ress3[3][3] = res20 ;
			
			for(i=0 ; i<4 ; i++)
			{
				for(j=0 ; j<4 ; j++)
				{
					printf("%d ",ress3[i][j]) ;
				}
				printf("\n") ;
			}
			break ;
		
		default : 
			printf("Invalid input") ;
			break ;
	}	
}
