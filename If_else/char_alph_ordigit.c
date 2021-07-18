/*Check whether the given character is alphabet,
digit or any other symbol. */
#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	//printf("%c",ch);
	
	if ((ch>='A'&&ch<='Z')|(ch>='a'&&ch<='z'))
		printf("The character is alphabet.");
	else if(ch>='0'&&ch<='9')
		printf("The character is a digit.");
	else
		printf("It is a character other than alphabet and a digit.");
		
	return 0;
}
