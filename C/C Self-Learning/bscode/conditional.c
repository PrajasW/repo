#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if (age>=21)
    {
        printf("You can do anything");
    }
    else if (age>=18)
    {
        printf("You can do only somethings");
    }
    else
    {
        printf("You can only study");
    }
    return 0;
}
