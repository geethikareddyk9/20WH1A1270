#include<stdio.h>
#include<math.h>
#define pi 3.142857
int main()
{
	float a,b,r,peri,area;
	scanf("%f %f", &a,&b);
	peri = 2*(a+b);
	printf("Perimeter of the rectangle is %f \n",peri);
	scanf("%f",&r);
	area = pi*(r*r);
	printf("Area of the circle is %f",area);
	return 0;
	
	
}
