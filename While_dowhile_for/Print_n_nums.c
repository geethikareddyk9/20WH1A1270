/*Print the  natural numbers from 1 to n(read n through scanf)*/
#include<stdio.h>
int main()
{
    int n,num;
    printf("Enter a number n to get numbers from 1 to n :");
    scanf("%i",&n);
    num=1;
    while (num<=n)
    {
        printf("%5i",num);
        num+=1;
    }
    return 0;
}
