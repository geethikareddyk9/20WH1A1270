/* 
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char Name[10] = {'w','e','l','c','o','m','e'};          
	
	len = strlen(Name);
	printf("\nLength of the Name is : %d",len);  
	 
	 
	puts(Name);                                         /* printf("\nEnter the string without space:")*/
	                                                        // scanf(%s,Name)
	                                                        //gets(name)
 	printf("\n%s",Name);
	return 0;
}

