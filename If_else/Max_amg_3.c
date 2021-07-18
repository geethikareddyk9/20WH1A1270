/*Biggest of 3 numbers*/
#include<stdio.h>
int main()
{
	int a,b,c,max=0;
	printf("Enter three number:");
	scanf("%d %d %d",&a,&b,&c);
	
	if (a>b && a>c)
		max = a;
	else if (b>c)
		max = b;
	else
		max = c;
		
	printf("\nMaximum of three is %d",max);
	return 0;
	
}
