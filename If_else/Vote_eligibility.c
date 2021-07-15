#include <stdio.h>
int main()
{
	int age ;
	printf("Enter your age : ");
	scanf("%i",&age);
	
	if (age>=18)
	printf("\nYou are eligible to vote in India. Choose Wisely!");
	// Right to Vote :B
	else
	printf("\nYou are not eligible to vote. ");
	return 0;
}
