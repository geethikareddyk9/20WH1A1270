#include<stdio.h>
int main()
{
	long long int n,count ;
	printf("Enter a number: ");
	scanf("%lli",&n);
	count = 0;
	while(n>0){
	count+=1;
	n /= 10 ;
	}
	printf("Number of digits - %lli",count);	
	return 0;
}
