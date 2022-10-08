#include <stdio.h>
#include <conio.h>

int main()
{
    char a = 'b';
    // switch takes int value and char value

    switch (a)
    {
    case 'a':
        printf("a is a");
        break;
    
    default:
        printf("default");
        break;
    }


    /*printf("\nPress any key to exit");
    getch();*/

    return 0;
}