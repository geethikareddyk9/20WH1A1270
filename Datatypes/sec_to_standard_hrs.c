/*Write a C program to convert a given integer (in seconds) 
to hours, minutes and seconds.*/

/* Write a C program to input  time in seconds and 
print in standard time format HH:MM:SS. */

#include<stdio.h>
#include<math.h>
int main()
{
	int h,m;
	int seconds;
	printf("\nEnter the time in seconds: ");
	scanf("%i",&seconds);
	h = seconds/3600;
	m = seconds/60;
	int secformin = seconds-(h*3600);
	printf("\nHours: %d",h);
	printf("\nMinutes: %d",(secformin)/60);
	printf("\nSecond: %d",seconds-(m*60));
	
	printf("\nStandard time is %d:%d:%d",h,(secformin)/60,seconds-(m*60));
	return 0;
	
	
}
