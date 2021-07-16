#include <stdio.h>
int main()
{
	int n,i=1,r,binary=0;//r[100],k[100];
	printf("Enter a number: ");
	scanf("%d",&n);
	while (n!=0)
	{
		r=n%2;
		n/=2;
		binary=binary+i*r;
		i*=10;
	}
		printf("%d ",binary);
	
		return 0;
		
	
}
