#include<stdio.h>
#include<math.h>
int main()
{
	int x,i,r,sum=0;
	scanf("%d",&x);
	for (i=0;i<x;i++)
	{
		r=pow(x,i);
		sum=sum+r;
		
	}
	printf("Total is %d",sum);
}
