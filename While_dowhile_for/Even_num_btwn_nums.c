/*Print even numbers from 200 to 300 */
#include<stdio.h>
int main()
{
	int i,upplimit,lwrlimit;
	printf("Enter lower limit and upper limits (included): ");
	scanf("%d %d", &lwrlimit, &upplimit);
	i=lwrlimit;
	while(i<=upplimit&&i>=lwrlimit)
	{
		if (i%2==0)
		printf("%5d ",i);
		//printf("\n");
		i++;
	}
	/*
	do{
		if (i%2==0)
		printf("%5d ",i);
		i++;
	}while(i<=upplimit&&i>=lwrlimit);
	*/
	return 0;
	
}
