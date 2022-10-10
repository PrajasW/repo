// code for static variables and static functions

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;
public:
    void setData();
    void getData();
    static void getCount();
};

int Employee::count = 0;

void Employee::getCount()
{
    cout<<"No. of registered employees are: "<<count<<endl;
}

void Employee::setData()
{
    cout<<"Enter id: ";
    cin>>id;
    count++;
}

void Employee::getData()
{
    cout<<"id is: "<<id<<endl;
}

int main()
{    
    Employee prajas,rohan,sahil;

    prajas.setData();
    prajas.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    sahil.setData();
    sahil.getData();
    Employee::getCount();

    return 0;
}