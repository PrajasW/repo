#include <iostream>
using namespace std;

class A
{
    int a;
public:
    void setData(int a)
    {
        // a = a will give error because in c++ local variables are given more priority
        // *this keyword is a pointer which points to the object which invokes the member functions
        this->a = a;
    }
    A& giveObj()
    {
        return *this;
    }
    void getData()
    {
        cout<<"value of a is "<<a<<endl;
    }
};


int main()
{
    A obj1;
    obj1.setData(35);
    obj1.getData();
    A obj2;
    obj2 = obj1.giveObj();
    obj2.getData();
    return 0;
}