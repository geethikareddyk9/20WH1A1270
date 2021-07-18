/*Program to print multiplication table of a given number*/
#include <stdio.h>
int main()
{
	int num,i,n;
	printf("Enter number and enter no. of multiplcations: ");
	scanf("%d %d",&num,&n);
	
	for (i=1;i<n+1;i++)
	{
		printf("%d X %d = %d", num,i,num*i);
		printf("\n");
	}
	return 0;
}
