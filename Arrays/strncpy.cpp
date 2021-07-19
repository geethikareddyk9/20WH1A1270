//program using strncpy
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[500],str2[500];
	int n;
	printf("Enter a string:\n");
	gets(str1);
	printf("Enter another string:\n");
	gets(str2);
	printf("Enter n\n");
	scanf("%d",&n);
	
    strncpy(str1,str2,n);
	printf("\n After the copying of a n characters \n str1=");
	puts(str1);
	return 5;
}

