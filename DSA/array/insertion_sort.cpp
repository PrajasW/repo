#include <iostream>
using namespace std;

template <class data_type>
void swapp(data_type &a,data_type&b)
{
    data_type temp = a;
    a = b;
    b = temp;
}

template <class data_type>
void display(data_type *arr,int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    float array[] = {3.6,4,1,6.4,2.1,7.6,9.2,0,2.5};
    int size = sizeof(array)/sizeof(array[0]);
    display(array,size);
    for (int i = 0; i < size-1; i++)
    {
        int j = i;
        while(array[j] > array[j+1] && j>-1)
        {
            swapp(array[j],array[j+1]);
            j--;
        } 
    }
    display(array,size);
    return 0;
}