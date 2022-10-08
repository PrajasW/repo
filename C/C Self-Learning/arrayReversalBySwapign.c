#include <stdio.h>
#include <conio.h>

void arrayRev(int arr[],int len)
{

    int temp;
    for (int i = 0; i < len/2; i++)
    {
        temp = arr[i];
        arr[i]=arr[len-i-1];
        arr[len-i-1]=temp;   
    }
    
}

int main()
{
    int array[] = {2,5,48,2,15,6,3,98,68,82,123};
    int length = 11;
 
    printf("the orignal array is");
    for (int i = 0; i < length; i++)
    {
        printf(" %d",array[i]);
    }

    arrayRev(array,length);
    
    printf("\nthe reverse array is");
    for (int i = 0; i < length; i++)
    {
        printf(" %d",array[i]);
    }

    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}