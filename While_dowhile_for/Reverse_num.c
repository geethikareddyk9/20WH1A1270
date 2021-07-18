/* To find the reverse of a given number(Egi/p 6758 o/p=8576)*/
#include<stdio.h>
int main()
{
	long int n,r,revnum;
	printf("Enter a number : ");
	scanf("%li",&n);
	revnum=0;
	while(n>0){r=n%10;
	printf("%li",r);
	n/=10;
	}
	//printf("Reversed number is %i",revnum);
	return 0;
	
}
