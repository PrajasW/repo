#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name1[100],name2[100];
    printf("Enter your name:");
    gets(name1);
    printf("Enter your friends name(if any):");
    gets(name2);
    printf("%s is a friend(if real) of %s\n",name1,name2);
    char name3[100];
    strcpy(name3,strcat(name1,name2));
    puts(name3);
    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}

// #include <string.h>
// contains the following functions
// strcat --> to concatinate two strings (combine)
// strlen --> to find the length of string
// strcpy(str1,str2) --> to copy str2 to str1
// strrev --> to reverse a string
// strcmp --> to compare two strings