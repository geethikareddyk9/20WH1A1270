/*Program to find sum of n integers */
#include <stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter a number n ");
	scanf("%i",&n);
	for(i=0;i<n+1;i++)
	sum+=i;
	printf("Sum of n numbers is %i",sum);
	return 0;
}

