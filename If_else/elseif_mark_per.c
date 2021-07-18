/*Write a program that declares Class awarded for a given percentage of marks, 
where mark<40%= Failed , 40% to <60% =Second class, 
60 % to70% = First class , >=70%= Distinction.
Read percentage from standard input*/

#include<stdio.h>
int main()
{
	int mark;
	printf("Enter the percentage of marks: ");
	scanf("%d",&mark);
	
	if (mark>=70)
		printf("You got Distinction.");
	else if (mark>40&&mark<=60)
		printf("You got Second class.");
	else if (mark>60&&mark<=70)
		printf("You got First class.");
	else //(mark<=40)
		printf("You got Failed.");
	return 0;
}

