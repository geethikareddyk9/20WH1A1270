#include <stdio.h>
int main()
{
	int i,A[250],max,loc=0,size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the elements: ");
	
	for(i=0;i<size;i++)
		scanf("%d",&A[i]);
	printf("\n");
	
	for (i=1;i<size;i++)
		if (A[i]>A[loc])
			loc=i;
		/*if (A[i]>A[i+1])
			max=A[i];
		elif(A[i+1]>A[i])
			max=A[i+1];
		else*/	
	printf("Maximum of elements in array is %d.",A[loc]);
	return 0;
		
	/*for(i=0;i<)
		return 0;*/
	
	// max,min,avg
}
