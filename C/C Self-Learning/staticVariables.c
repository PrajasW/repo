#include <stdio.h>
#include <conio.h>

int func1()
{
    static int temp = 5;
    temp++;
    return temp; 
}


int main()
{
    int b;
    b = func1();
    printf("%d ",b);

    b = func1();
    printf("%d ",b);

    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}