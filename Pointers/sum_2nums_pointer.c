#include<stdio.h>
int main()
{
	int a=5,b=4,*iptr=NULL,*ptr=NULL;
	iptr=&a;ptr=&b;
	printf("Enter 2 numbers: ");scanf("%d",iptr);
	printf("\nSum of 2 nums: %d",*ptr+*iptr);
	// fflush(stdin)  stdin - is keyboard,flush means removes that input,entered by keydoard.
	//hw swap two variables using pointers - modified to functions tmrw.
	return 0;
}
