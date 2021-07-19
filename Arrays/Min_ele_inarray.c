/*  Minimum of Array elements*/
#include<stdio.h>
int main()
{
	int i,A[250],size,j,temp;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the elements: ");
	for(i=0;i<size;i++)
		scanf("%d",&A[i]);
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(A[j]>A[j+1])
			{
				temp = A[j+1];
				A[j+1]=A[j];
				A[j] = temp;	
			}
		}
	}
	printf("\nMinimum among array elements is %d.",A[0]);
	//printf("\nMaximum among array elements is %d.",A[j]);
	return 0;	
}
