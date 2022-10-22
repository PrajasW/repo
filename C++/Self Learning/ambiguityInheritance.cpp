#include <iostream>
using namespace std;

class English 
{
public:
    void greet()
    {
        cout<<"How are you?"<<endl;
    }
};
class Hindi 
{
public:
    void greet()
    {
        cout<<"Kaise Ho?"<<endl;
    }
};
class Student: public English,public Hindi
{
public:
    void greet()
    {
        English::greet();
    }
};

int main(int argc, char const *argv[])
{
    Student prajas;
    prajas.greet();  
    return 0;
}