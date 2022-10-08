// NOTE: Arrays are "passed by refrence" so change in userFunction() will show affect in main()
// also length(array[]) = sizeof(array)/sizeof(data_type_of_array)


#include <stdio.h>
#include <conio.h>


float averageByArray(int arr[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float average = (float) sum/n;
    return average;
}
float averageByPointer(int* arr, int n)
{
    int sum=0;
    for (int *ptr = arr; ptr <  arr+n; ptr++)
    {
        sum = sum + *ptr;
    }
    return (float)(sum/n);
}
int main()
{
    int marks[] = {50,63,61,89,91,53,35,62,73,63,34,46};

    // to find length of array use sizeof(array)/sizeof(data_type_of_array)
    int size = sizeof(marks)/sizeof(int);
    printf("AverageByArray = %f",averageByArray(marks,size));    

    printf("\nAverageByPointer = %f",averageByPointer(marks,size));
    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}