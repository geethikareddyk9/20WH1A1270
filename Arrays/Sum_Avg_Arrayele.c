#include<stdio.h>
int main()
{
	int A[100],size,i,sum;
	float avg;
	printf("Enter the Size of the array: ");
	scanf("%d",&size);  
	printf("Enter %d numbers:\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&A[i]);
	printf("\n");                                
	sum=0;
	for(i=0;i<size;i++)
		sum+=A[i];
		//printf("%4d",A[i]); - this is for printing the numbers we took.
	printf("\nSum of given numbers = %d",sum);
	avg = (float)sum/i;
	printf("\nAverage of given numbers = %0.2f",avg);

	
	
	return 0;
}
