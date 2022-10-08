#include <stdio.h>
#include <conio.h>

// call by value : will swap the data of parameters not the arguments :(
// void swap(int x,int y)
// {
//     int z;
//     z = y;
//     y = x;
//     x = z;
// }
// int main()
// {
//     int a,b;
//     printf("Enter value of a and b:");
//     scanf("%d %d",&a,&b);

//     printf("\nvalues of a and b are %d and %d",a,b);
//     swap(a,b);
//     printf("\nvalues of a and b are %d and %d",a,b);
//     /*printf("\nPress any key to exit");
//     getch();*/
//     return 0;
// }

// call by refrence
void swap(int *x,int *y)
{
    int z;
    z = *y;
    *y = *x;
    *x = z; 
}
int main()
{
    int a,b;
    printf("Enter value of a and b:");
    scanf("%d %d",&a,&b);

    printf("\nvalues of a and b are %d and %d",a,b);
    swap(&a,&b);
    printf("\nvalues of a and b are %d and %d",a,b);
    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}