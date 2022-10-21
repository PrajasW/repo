#include <iostream>
using namespace std;

class Base
{
    int data1;
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base::setData()
{
    data1 = 3;
    data2 = 4;
}
int Base::getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}

class Derived : public Base //synatax for inheritance
{
    int data3;
public:
    void process();
    void display();
};

void Derived :: process()
{
    data3 = data2 * getData1();
}
void Derived :: display()
{
    cout<<"data1 = "<<getData1()<<endl;
    cout<<"data2 = "<<data2<<endl;
    cout<<"data3 = "<<data3<<endl;
}
int main()
{
    Derived obj;
    obj.setData();
    obj.process();
    obj.display();    
    
    return 0;
}