#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter Your name:");
    char name[100];
    scanf("%s",&name);
    printf("Welcome to the real world %s",name);
    char string[] = {'p','r','a','j','a','s','\0'}; /*so \0 is important*/
    printf("\nSize of it is: %d",sizeof(string));
    printf("\n%s\n",string);

    char str[] = "football";
    printf("%s",str);

    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}