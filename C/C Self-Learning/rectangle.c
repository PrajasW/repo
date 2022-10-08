#include <stdio.h>
#include <conio.h>

int main()
{
    int w,h;
    printf("Enter Width: ");
    scanf("%d",&w);
    printf("Enter Height: ");
    scanf("%d",&h);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (i==0 || j==0 || i==h-1 || j ==w-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    printf("\nPress any key to exit");
    getch();
    return 0;
}