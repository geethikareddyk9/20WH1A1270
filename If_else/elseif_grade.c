/*Write a C program to input marks of 3 subjects Physics, Mathematics and PPS, calculate
percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F
*/
#include<stdio.h>
int main()
{
	int phy,m2,pps;
	printf("Enter the 3 subject marks: ");
	scanf("%d %d %d",&phy,&m2,&pps);
	float mark = (phy+m2+pps)/3 ;
	//printf("%f",mark);
	if (mark>=90)
		printf("You got 'A' Grade.");
	else if (mark>=80)
		printf("You got 'B' Grade.");
	else if (mark>=70)
		printf("You got 'C' Grade.");
	else if (mark>=60)
		printf("You got 'D' Grade.");
	else if (mark>=50)
		printf("You got 'E' Grade.");
	else //(mark<=40)
		printf("You got 'F' Grade.");
	return 0;
}

