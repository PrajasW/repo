#include <iostream>
using namespace std;

template <class data_type>
void swamp(data_type &a,data_type &b)
{
    data_type temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a =10, b = 20;
    cout<<a<<" "<<b<<endl;
    swamp(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}