#include <stdio.h>
#include <conio.h>

void upsideTriangle(int h)
{
    for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
}

void downsideTriangle(int h)
{
    for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < h-i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
}

void leftsideTriangle(int h)
{
    int h1 = h/2;
    int h2 = h-h1;
    upsideTriangle(h1);
    downsideTriangle(h2);
}
void rightsideTriangle(int h)
{
    int h1=h/2;
    int h2 = h-h1;
    // upper half
    for (int i = 0; i < h1; i++)
        {
            for (int j = 0; j < h1-i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < i+1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    // lower half
    for (int i = 0; i < h2; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < h2-i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
}

int main()
{
    int a,h;
    printf("Enter the height of Triangle: ");
    scanf("%d",&h);
    printf("\npress 0 for upsideTriangle\npress 1 for downsideTriangle\npress 2 for leftsideTriangle\npress 3 for rightsideTriangle\npress 4 for all\nEnter the type of Triangle:");
    scanf("%d",&a);
    switch (a)
    {
    case 0:
        upsideTriangle(h);
        break;

    case 1:    
        downsideTriangle(h);
        break;

    case 2:
        leftsideTriangle(h);
        break;
    
    case 3:
        rightsideTriangle(h);
        break;
    case 4:
        upsideTriangle(h);
        printf("\n");
        downsideTriangle(h);
        printf("\n");
        leftsideTriangle(h);
        printf("\n");
        rightsideTriangle(h);
        break;
    default:
        printf("Please Enter a Valid Option");
        break;
    }    

    printf("\nPress any key to exit");
    getch();
    return 0;
}


// question :

// *
// **
// ***
// **** ---> triangular star - 0

// *****
// ****
// ***
// **
// * --> reverse triangular star - 1

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// * --> reverse triangular star - 2