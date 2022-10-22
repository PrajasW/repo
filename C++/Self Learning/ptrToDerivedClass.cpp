#include <iostream>
using namespace std;

class Base
{
public:
    int base_data;
    void print()
    {
        cout<<"Base data is "<<base_data<<endl;
    }
};

class Derived : public Base
{
public:
    int derived_data;
    void print()
    {
        cout<<"Base data is "<<base_data<<endl;
        cout<<"Derived data is "<<derived_data<<endl;
    }
};


int main()
{
    Base *base_class_pointer;
    Derived derived_obj;
    base_class_pointer = &derived_obj;
    base_class_pointer->base_data = 35;
    // base_class_pointer->derived_data = 32; --> will throw error 
    base_class_pointer->print();

    Derived *derived_class_pointer;
    derived_class_pointer = &derived_obj;
    derived_class_pointer->derived_data = 52;
    derived_class_pointer->print(); 
    return 0;
}