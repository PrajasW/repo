#include <iostream>
using namespace std;

class myArray
{
    int totalsize;
    int usedsize;
public:
    myArray(int totalsize,int usedsize)
    {
       this->totalsize = totalsize;
       this->usedsize = usedsize;
    }
    int *position = new int[totalsize];
    int getUsedSize()
    {
        return usedsize;
    }
    int getTotalSize()
    {
        return totalsize;
    }
    void show()
    {
        for (int i = 0; i < usedsize; i++)
        {
            cout<<position[i]<<" ";
        }
    }
};


int main()
{
    myArray arr(100,3);
    for (int i = 0; i < arr.getUsedSize(); i++)
    {
        cin>>arr.position[i];
    }
    arr.show();
    cout<<endl;

     return 0;
}