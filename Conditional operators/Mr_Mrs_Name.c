/*. Program to read Name and Gender of a person and 
print Mr. or Mrs before the name 
Note: Format specifier to read name is %s(don't give space separated names)*/
#include<stdio.h>
#include<string.h>
int main()
{
	char Name[100],Gen;
	printf("Enter your name: ");
	scanf("%s",Name);
	printf("Enter your gender(M/F): ");
	scanf("\n%c",&Gen);
	
	(Gen=='F')?printf("\nWelcome to C programme Ms.%s.",Name):printf("\nWelcome to C programme Mr.%s.",Name);
	return 0;
}
