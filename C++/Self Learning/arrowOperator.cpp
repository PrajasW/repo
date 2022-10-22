#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
public:
    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex *ptr = new Complex[3];
    int x,y;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>x>>y;
    //     ptr[i].setData(x,y);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     ptr[i].getData();
    // }
    
    // another way to do this is with the arrow operator (->)
    for (int i = 0; i < 3; i++)
    {
        cin>>x>>y;
        (ptr+i)->setData(x,y);
    }
    for (int i = 0; i < 3; i++)
    {
        (ptr+i)->getData();
    }
    return 0;
}