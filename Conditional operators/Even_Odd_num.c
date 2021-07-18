/* Program to check whether the number is even or odd 
using conditional operators */
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	(n%2==0)?printf("The given number is Even."):
		printf("The given number is Odd");
	return 0;
}
