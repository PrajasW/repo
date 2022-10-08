#include <stdio.h>
#include <conio.h>

// argc --> argument count
// argv --> arguemnt value
int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n\n",argc);         
    for (int i = 0; i < argc; i++)
    {
        printf("argument at index %d is %s \n",i,argv[i]);
    }
    
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}