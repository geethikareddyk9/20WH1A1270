//program using strcat

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[200],str2[200];	
	printf("Enter a string:\n");
	gets(str1);
	printf("Enter another string:\n");
	gets(str2);
	printf("\nBefore appending character :str1=");
    puts(str1);
	strcat(str1,str2);
	printf("\n After appending character :str1=");
	puts(str1);
	return 1;
}

