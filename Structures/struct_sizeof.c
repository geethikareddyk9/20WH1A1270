/*programm to print thesize of the structures*/
#include<stdio.h>
struct sz
{
	int roll,marks;
	char name[20];

};
int main()
{
	struct sz s;
	printf("\nSize of the structure : %d",sizeof(s));
	//printf("%d",sizeof());
	return 0;

}
