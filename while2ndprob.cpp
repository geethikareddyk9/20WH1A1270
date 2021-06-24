#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter the number:");
    scanf("%i",&num);
    sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    printf("The sum of digits of given number is %i.", sum);
}
