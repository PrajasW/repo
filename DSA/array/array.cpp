#include <iostream>
using namespace std;

class Array
{
    int totalsize;
    int usedsize;
public:
    int *position = NULL;
    Array(int,int);
    void insert(int, int);
    void remove(int);
    void show();
    int getUsedSize(){return usedsize;}
    int getTotalSize(){return totalsize;}
    int linearSearch(int);
    int binarySearch(int);
    void quickSort();
    void bubbleSort();
};
Array::Array(int totalsize,int usedsize)
{
    this->totalsize = totalsize;
    this->usedsize = usedsize;
    position = new int[totalsize];
}
void Array::show()
{
    for (int i = 0; i < usedsize; i++)
    {
        cout << position[i] << " ";
    }
}
void Array::insert(int num, int pos)
{
    if (!(usedsize < totalsize))
    {
        cout << "array overflow";
        exit(0);
    }
    usedsize++;
    for (int i = usedsize; i > pos; i--)
    {
        position[i] = position[i - 1];
    }
    position[pos] = num;
}
void Array::remove(int pos)
{
    usedsize--;
    for (int i = pos; i < usedsize; i++)
    {
        position[i] = position[i+1];
    }
}
int Array::linearSearch(int num)
{
    for (int i = 0; i < usedsize; i++)
    {
        if (position[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int Array::binarySearch(int num)
{
    int low=0,high=usedsize-1;
    if (num == position[low])
    {
        return low;
    }
    if (num == position[high])
    {
        return high;
    }
    while (low != high)
    {
        int mid = (low+high)/2;
        if (position[mid] == num)
        {
            return mid;
        }
        if (num < position[mid])
        {
            high = mid;
        }
        else
        {
            low = mid+1;
        }
    }
    return -1;
}
void Array::quickSort()
{

}
void Array::bubbleSort()
{
    int temp;
    for (int i = 0; i < usedsize; i++)
    {
        for (int j = 0; j < usedsize-1-i; j++)
        {
            if (position[j] > position[j+1])
            {
                temp = position[j];
                position[j] = position[j+1];
                position[j+1] = temp;
            }
        }
    }
}
int main()
{
    // Array arr(1400000000,1400000000);
    Array arr(100,10);
    for (int i = 0; i < arr.getUsedSize(); i++)
    {
        // cin >> arr.position[i];
        arr.position[i] = i;
    }
    // arr.bubbleSort();
    // arr.show();
    // cout<<"linear: "<<arr.linearSearch(1400000000)<<endl;
    // cout<<"binary: "<<arr.binarySearch(1400000000)<<endl;
    cout<<"binary: "<<arr.binarySearch(1)<<endl;
    // arr.insert(55,2);
    // arr.show();
    // cout << endl;
    // arr.remove(3);
    // arr.show();
    // cout<<"lin: "<<arr.linearSearch(3)<<endl;
    // cout<<"lin: "<<arr.binarySearch(3)<<endl;
    return 0;
}