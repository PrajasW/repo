#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("text.txt","w");
    fputs("HELLO PRAJAS HERE\nHOW ARE YOU?\nI'm fine tank you",ptr);
    fclose(ptr);

    ptr = NULL;
    ptr = fopen("text.txt","r");
    char string[100];
    // so new line is not read :(
    fgets(string,19,ptr);
    puts(string);
    fclose(ptr);
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}