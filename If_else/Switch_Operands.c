/* operands , using switch */
#include<stdio.h>
int main()
{
    int a,b,c;
    char operand;
    printf("Enter two integers:");
    scanf("%i %i",&a,&b);
    printf("Enter operand:");
    scanf("\n%c",&operand);
    c=a*b;
    switch(operand)
    {
        case '*': printf("\nAnswer is %i", c);
        break;
        case '/': printf("\nAnswer is %f", (float)a/b ); 
        break;
        case '-': printf("\nAnswer is %i", a-b) ; 
        break;
        case '+': printf("\nAnswer is %i", a+b) ; 
        break;
        case '%': printf("\nAnswer is %d", a%b) ; 
        break;
    default:printf("\nThe operand you entered is not valid");
    }
    return 0;
}
