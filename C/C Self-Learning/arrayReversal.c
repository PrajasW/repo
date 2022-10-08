#include <stdio.h>
#include <conio.h>

void arrayRev(int arr[],int len)
{
    int arev[len];
    for (int i = 0; i < len; i++)
    {
        arev[len-i-1] = arr[i];
    }
    printf("the orignal array is");
    for (int i = 0; i < len; i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\nthe reverse array is");
    for (int i = 0; i < len; i++)
    {
        printf(" %d",arev[i]);
    }
    
}

int main()
{
    int array[] = {2,5,6,2,15,6,3,6,68,82,123};
    int length = 11;
    arrayRev(array,length);
    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}