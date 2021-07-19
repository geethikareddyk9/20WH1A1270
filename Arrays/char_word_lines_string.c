/* Program to print number of characters, words and lines in a text. */

#include <stdio.h>
#include <string.h>

int main() 
{
    int i=0;
    char ch,s[100],sen[100],chr=' ',string[250];
    printf("Enter a character: \n");
    scanf("%c",&ch);
    printf("Enter a string: \n");
    scanf("%s", s);
    printf("Enter a sentence: \n");
    scanf("\n%[^\n]%*c",sen);
    printf("Enter multiple lines: \n ");
    for (i=0;chr!='$';i++)
    {
		chr = getchar();
		string[i]=chr;
	}
	string[i-1]='\0';
    //for (i=0,i<,i++) 
    printf("\n\nThe character is \n%c",ch);
    printf("\n\nThe string is \n%s",s);
    printf("\n\nThe sentence is \n%s",sen);
    printf("\n\nLines of text is \n%s",string);   
    return 0;
}

