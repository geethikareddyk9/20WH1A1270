/*Write a C program, which takes a number (1-7)  from the user, and 
prints the day of the week as per the number(use Switch Statement)
(1-Monday,2-Tuesday…7-Sunday)*/

#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number(1-7):");
	scanf("%d",&n);
	switch(n)
	{
		case 1 : printf("It's Monday.");
			break;
		case 2 : printf("It's Tueday.");
			break;
		case 3 : printf("It's Wednesday.");
			break;
		case 4 : printf("It's Thurday.");
			break;
		case 5 : printf("It's Friday.");
			break;
		case 6 : printf("It's Saturday.");
			break;
		case 7 : printf("It's Sunday.");
			break;
	default : printf("Something is wrong...");
	}
	return 0;
}
