#include <stdio.h>
int main()
{
	int num;
	float fnum;
	char letter;
	scanf("%i %f %c",&num, &fnum, &letter);
	printf("%3i%3i%3lu",sizeof(num),sizeof(fnum),sizeof(letter));
	
	// or like this , we can do 
	printf("%lu\n",sizeof(long int));
	//printf("%li",sizeof(signed char));
	return 0;
}
