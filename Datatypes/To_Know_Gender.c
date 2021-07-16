/*gender , else if , switch*/

#include <stdio.h>
int main()
{
    char gender;
    printf("Enter your gender(M/F):");
    scanf("%s" ,&gender);
    switch(gender)
    {
        case 'F': printf("\nYou are a Female.");
        break;
        case 'M' : printf("\nYou are a Male.");
        break;
        
    }
    return 0;
}
