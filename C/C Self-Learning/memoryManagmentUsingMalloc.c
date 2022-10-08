#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    printf("Enter The size of array you want to create: ");
    int n;
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d position of this array: ",i);
        // scanf("%d",ptr+i); or
        scanf("%d",&ptr[i]);

        // note as pointer arithmatic ptr[i] == *(ptr+i)
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\nThe value at %d positon of array is %d",i,ptr[i]);
    }
    

    // printf("\nPress any key to exit");
    // getch();
    return 0;
}