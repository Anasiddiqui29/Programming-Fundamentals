#include <stdio.h>
#include <string.h>

int main()
{
	struct library
	{
		char acc_num[20] ; 
		char author[20] ;
		char title[20] ;
		int flag ; 
	} ; 
	
	struct library detail[10] =
	{
		{"MCB25" , "Charles" , "Oliver Twist" , 5} ,
		{"CCB30" , "Charles" , "Expectations" , 15} ,
		{"GGA56" , "Rashid khan" , "Jamshed hou" , 45} ,
		{"FCF78" , "Istiyaq Ahmed" , "Inspector" , 25} ,
		{"DFE90" , "Boz" , "Happy" , 75} 
	} ;
	
	int menu ,total = 0 ,found = 0;
	char author1[20] , title1[20] ,issue[20];
	
	printf("Menu for the library \n");
	printf("Press 1 for displaying books information \n");
	printf("Press 2 for adding a new book to a library \n") ;
	printf("Press 3 for displaying all the books of the particular author \n");
	printf("Press 4 for displaying the number of books for a particular title \n") ;
	printf("Press 5 for displaying total number of books in the library \n") ;
	printf("Press 6 to issue a book \n") ;
	
	printf("\n\n") ;
	
	printf("Choose from above options : ");
	scanf("%d" , &menu) ;
	
	printf("\n") ;
	
	int i ;
	switch(menu)
	{
		case 1 :
			for(i=0 ; i<10 ; i++)
			{
				printf("Book name : %s \n" , detail[i].title) ;
				printf("Author name : %s \n" , detail[i].author) ;
				printf("Number of books available: %d \n" , detail[i].flag) ;
				printf("Accession number: %s\n" , detail[i].acc_num) ;
				printf("\n\n") ;
			}	
			break ; 
		case 2 : 
			printf("Enter the name of the book: ") ; 
			scanf("%s" , &detail[i].title) ; 
			printf("Enter the name of the author: ") ;
			scanf("%s" , &detail[i].author) ; 
			printf("Enter accession number: ") ;
			scanf("%s" , &detail[i].acc_num) ;
			detail[i].flag = 1 ; 
			break ; 
		case 3 : 
			printf("Enter the name of the author: ") ; 
			scanf("%s" , &author1) ;
			
			for(i=0 ; i<10 ; i++)
			{
				if(strcmp(detail[i].author , author1)==0)
				{
					printf("Books name: \n") ;
					printf("%s \n" , detail[i].title) ; 
					found = 1 ; 
				}	
			 } 
			 if (!found) 
			 {
        		printf("No books by the author are available.\n");
			 }
			 break ; 
		case 4 : 
			printf("Enter the title of the book: ");
			scanf("%s" , &title1) ;
			
			for(i=0 ; i<10 ; i++)
			{
				if(strcmp(detail[i].title,title1)==0)
				{
					printf("Number of books available : %d" , detail[i].flag);
				}
				else
				{
					printf("Not available") ;
				}
			}
			break ; 
		case 5 :
			for(i=0 ; i<10 ; i++)
			{
				total = total + detail[i].flag ;
			}
			printf("Total number of books available in the library: %d" , total) ;
			break ; 
		case 6 :
			printf("Enter the book you want to issue: ");
			scanf("%s" , &issue) ;
			
			for(i=0 ; i<10 ; i++)
			{
				if(strcmp(detail[i].title,issue)==0)
				{
					printf("Book issued") ;
					detail[i].flag = detail[i].flag - 1 ;
					found = 1 ;
				}
			}
			if(!found)
			{
				printf("Book not available") ;
			}
		break ; 
		
		default:
			printf("Invalid choice") ;
			break ; 
	}
	
	
}
