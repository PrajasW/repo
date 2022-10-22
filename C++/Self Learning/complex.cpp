#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;
public:
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void getData()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex sum;
        sum.a = c.a + a;
        sum.b = c.b + b;
        return sum;
    }
    void operator ++()
    {
        a += 1;
        b += 1;
    }
};

int main()
{
    Complex a,b,c;
    a.setData(3,5);
    b.setData(2,3);
    c = a+b; // compiler interprets this as c = a.add(b); so here b is the parameter and a is the object on which this function is worked upon... and the return sum is stored in obj c.
    a.getData();
    b.getData();
    c.getData();
    Complex d;
    d = a+b+c; // d = a.add(b.add(c));
    d.getData();
    ++d;
    d.getData();
    return 0;
}