#include <iostream>
using namespace std;

// templates are tempates for classes working with different datatypes


template <class T>
class Complex
{
    T a;
    T b;
public:
    Complex(T a=0,T b=0)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i";
    }
    void operator ++();
};

template <class T>
void Complex<T>::operator ++()
{
    this->a += 1;
    this->b += 1;
}


int main()
{
    Complex <int> complexInt(3,6);
    Complex <float> complexFloat(214.52,35.214);
    complexInt.display();
    cout<<endl;
    cout<<endl;
    complexFloat.display();
    ++complexFloat;
    cout<<endl;
    cout<<endl;
    complexFloat.display();
    return 0;
}