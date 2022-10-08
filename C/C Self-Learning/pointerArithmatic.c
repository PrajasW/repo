#include <stdio.h>
#include <conio.h>

// arr is the pointer to the first element of arr[]

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("address of &arr[0] = %p\n",&arr[0]);
    printf("address of arr = %p\n",arr);
   
    printf("value of arr[0] = %d\n",arr[0]);
    printf("value of *arr = %d\n",*arr);

    printf("address of &arr[3] = %p\n",&arr[3]);
    printf("address of (arr+3)= %p\n",(arr+3));
    
    printf("value of arr[3] = %d\n",arr[3]);
    printf("value of *(arr+3)= %d\n",*(arr+3));
    return 0;
}