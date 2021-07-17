/* programm to find Forienhiet to celsius*/

#include<stdio.h>
#include<math.h>
int main()
{
	float c,f,C, F;
	printf("\nEnter Temperature in Forienhiet:");
	scanf("%f",&f);
	C = (5/9)*(f-32);
	printf("\nThe celsius is %f:",C);
	
	/* // celsius to forenhiet.
	printf("\nEnter Temperature in celsius:");
	scanf("%f",&c);
	F=(1.8*c)+32;
	printf("\nThe fharenheat is %f:",F);
	*/
	return 0;
}
