/* Generate a random number using built-in Function*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("A random number %d", rand() % 5000); 
	                                 //   ^this no. is the limit.
	                    
	// works for positive numbers only i think!
}
