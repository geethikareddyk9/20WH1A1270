#include <stdio.h>
int main ()
{
	int num ;
	scanf("%i",&num);
	
	if (num%3==0 && num%5==0)
	printf("The given number is divided by 3 and 5. ");
	else
	printf("The given number is not divided by 3 and 5. ");
	return 0;

}
