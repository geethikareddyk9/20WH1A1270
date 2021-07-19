/* Program to read multiple line strings*/

#include<stdio.h>
int main()
{
	int i;
	char str[100];
	char ch=' ';
	printf("\nEnter multiple lines and end it with $ :\n");

	for(i=0;ch!='$';i++)
	{
		ch = getchar();
		str[i]=ch;
	}
   	str[--i] = '\0';
   	printf("\n\n The string is \n");
   	puts(str);
   	return 0;
}
