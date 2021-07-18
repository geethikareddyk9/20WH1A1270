/* relational operators*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2,greater,lesser,equalto,grteql,lesseql;
    printf("Enter two numbers: ");
    scanf("%i%i",&num1,&num2);
    greater=num1>num2;
    lesser=num1<num2;
    equalto=num1==num2;
    grteql=num1>=num2;
    lesseql=num1<=num2;
    printf("result is '%i,%i,%i,%i,%i' ",greater,lesser,equalto,grteql,lesseql);
    return 0;
    // 1 is true 
    // 0 is false 
}
