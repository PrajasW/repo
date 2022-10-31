#include <iostream>
using namespace std;

template <class data_type>
class vector
{
public:
    data_type *arr;
    int size;
    vector (int m)
    {
        size = m;
        arr = new data_type[size];
    }
    data_type operator *(vector &v) //dot product
    {
        data_type d=0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * arr[i];
        }
        return d;
    }
};


int main()
{ 
    vector <int> a(3);
    vector <int> b(3);
    a.arr[0] = 4;
    a.arr[1] = 6;
    a.arr[2] = 4;
    b.arr[0] = 1;
    b.arr[1] = 2;
    b.arr[2] = 3;
    int doti = a*b;
    cout<<doti<<endl;
    
    vector <float> c(3);
    vector <float> d(3);
    c.arr[0] = 4.5;
    c.arr[1] = 6.1;
    c.arr[2] = 4.3;
    d.arr[0] = 1.9;
    d.arr[1] = 2.7;
    d.arr[2] = 3.4;
    float dotf = c*d;
    cout<<dotf<<endl;
    return 0;
}