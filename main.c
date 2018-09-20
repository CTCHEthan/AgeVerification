#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minAge = 18;
    int maxAge = 35;

    int age;

    printf("Enter your age to continue\n");
    scanf("%d", &age);

    if(age >= minAge && age <= maxAge)
    {
        printf("Age verified\n");
    }
    else
    {
        printf("Age not verified\n");
    }

    /*
    if ( age >= minAge );
    {
        if (age >= maxAge);
        {
            printf("You are too old to vote\n");
        }
        printf("You are old enough to vote\n");
    }
    if ( age <= minAge );
    {
        printf("You are not old enough to vote\n");
    }

*/

    return 0;
}
