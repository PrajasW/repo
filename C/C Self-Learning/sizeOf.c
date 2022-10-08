#include <stdio.h>
#include <conio.h>

int main()
{
    int a=3;
    int *ptr = &a;
    printf("The size of char is %d bytes\n",sizeof(char));
    printf("The size of int is %d bytes\n",sizeof(int));
    printf("The size of float is %d bytes\n",sizeof(float));
    printf("The size of pointer is %d bytes\n",sizeof(ptr));
    printf("The size of double is %d bytes\n",sizeof(double));

    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}