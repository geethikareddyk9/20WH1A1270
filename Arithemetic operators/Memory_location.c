/*Program to print the memory address of a variable in C*/

#include <stdio.h>
int main()
{
	int num,location;
	char word;
	printf("Enter a number \n");
	scanf("%i",&num);
	
	printf("\nMemory location of the given number is %u ",&num);
	
	printf("\nEnter a character ");
	scanf("%c",&word);
	
	printf("\nMemory location of the given character/word is %u ",&word);
	return 0;
	
}

