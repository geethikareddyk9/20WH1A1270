/* Program to find maximum of four numbers using conditional operator */
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter four number: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	(a>b&&a>c&&a>d)?printf("%d is greater than %d,%d and %d.",a,b,c,d):
		(b>a&&b>c&&b>d)?printf("%d is greater than %d,%d and %d.",b,a,c,d):
			(c>a&&c>b&&c>d)?printf("%d is greater than %d,%d and %d.",c,a,b,d):
				printf("%d is greater than %d,%d and %d.",d,a,b,c);
			
	//this program exclude the cases of if any two numbers are equal.
	//if(a==b|a==c|a==d|b==c|b==d|c==d)
}
