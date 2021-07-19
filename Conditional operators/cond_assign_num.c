/* using Conditional, 
assigning a number to another variable if it is positive.*/

#include<stdio.h>
int main()
{
    //int a=5;
    //a%2==0? printf("%i is even ",a) : printf("%i is not even",a);
    int num1= 2,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    num2= (num1>0) ? num1:0;       // wrong (num1>0)? num2=num1: num2=0;
    printf("\n%d %d",num1,num2); //wrong printf("num2=%i",num2);
    // this is also to know where the number is positive or not (: 
    return 0;
}
