/*read and print student details using pointers to structues*/
#include<stdio.h>
#include<string.h>

struct student
{
	int roll,smarks;
	char Name[200];
}s,*sptr;
int main()
{
	struct student *sptr;
	printf("Enter student details:\n");
	printf("Enter Name:\n");
	scanf("%c",&sptr->Name);
	printf("Enter roll number: ");
	scanf("%d",sptr->roll);
	printf("\nEnter the marks: ");
	scanf("%d",sptr->smarks);
	printf("-----------------------");
	printf("Student details:\n");
	printf("Student name: %s\nRoll number: %d\nMarks: %d",sptr->Name,sptr->roll,sptr->smarks);
	
}
