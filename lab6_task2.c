#include <stdio.h>
#include <string.h>


	void authenticateUser(char password[50] , char password2[50])
	{
		int i ;
		
		i = strncmp(password , password2 , 50);
		if(i==0)
		{
			printf("Login successful");	
		}
		else
		{
			printf("Login failed");
		}	
	}
	
int main()
{
	
	char password[59];
	printf("Enter the password(atleast 8 characters): ") ; 
	gets(password) ;
	
	int size ;
	size = strlen(password);
	
	if(size>=8 && size<=12)
		{
			printf("Weak password\n");
		}
		else
		{
			if(size>=13 && size<= 16)
			{
				printf("Medium password\n");
			}
			else
			{
				if(size>=17 && size<=22)
				{
					printf("Strong Password\n");
				}
			}
		}
	
	char password2[50];
	printf("Enter your password again: ");
	gets(password2) ;
	
	authenticateUser(password , password2) ;
	
}
	
	
	
	
	
	
