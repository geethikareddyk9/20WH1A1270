/* 6.Program to clear LSB of a number*/
#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);

	printf("Number after clearing LSB is %d",(~0<<1)&num);
	
	// i don't know why there is ' ~0<<1 ' 

	return 0;


}

