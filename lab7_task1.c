#include <stdio.h>
#include <string.h>

//swap function
void swap(int *a, int *b)
{
	int tmp = *a ;
	*a = *b ;
	*b=tmp ;
	
}

int main ()
{
	int j =2 , k=5 ;
	printf("j = %d , k = %d \n",j,k);
	int *ptr , *ptr1 ;
	ptr1 = &k ;
	ptr = &j ;
	
	//calling function
	swap(ptr , ptr1);
	
	printf("j = %d , k=%d \n", *ptr,*ptr1);

	return 0 ;
	
	
}
	

	
