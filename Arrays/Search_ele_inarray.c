/* C program to search for array elements. */ 

#include<stdio.h>
int main()
{
  	int A[100], Size, i, Search, stop;
	printf("\n Please Enter the size of an array :  ");
  	scanf("%d",&Size);
	
	printf("\n Please Enter %d elements of an array: \n", Size);
  	for(i = 0; i < Size; i++)
   	{
   	 	scanf("%d",&A[i]);
   	}
	
	printf("\n Please Enter the Search Element  :  ");
  	scanf("%d",&Search);      
 
  	stop = 0;
  	for(i = 0; i < Size; i++)
   	{
   		if(A[i] == Search)
     	{
       		stop = 1;
       		break;
	 	}   
   	}
  
  	if(stop == 1)
  	{
	printf("\n We found the Search Element %d at Position %d ", Search, i + 1);
	}
	else
	{
		printf("\n Element not found %d ", Search);
	}	
  	return 0;
}

