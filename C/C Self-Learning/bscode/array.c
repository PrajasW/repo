#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[100];
    printf("Enter Your Name:");
    for (int i = 0; i < 100; i++)
    {
        scanf("%c",&name[i]);
    }
    printf("Welcome to IIIT-V ");
    for (int i = 0; i < 100; i++)
    {
        printf("%c",name[i]);
    }
    
    
    return 0;
}
