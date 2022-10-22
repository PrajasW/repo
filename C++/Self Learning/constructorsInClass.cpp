#include <iostream>
using namespace std;

class GF
{
    int money;
public:
    GF(int i)
    {
        cout<<"GF constructor called"<<endl;
        money = i;
    }
    void printGFbal()
    {
        cout<<money<<endl;
    }
};
class F : public GF
{
    int money;
public:
    F(int a,int b) : GF(a)
    {
        cout<<"F constructor called"<<endl;
        money = b;
    }
    void printFbal()
    {
        cout<<money<<endl;
    }
};
class M : public GF
{
    int money;
public:
    M(int a,int b) : GF(a)
    {
        cout<<"M constructor called"<<endl;
        money = b;
    }
    void printMbal()
    {
        cout<<money<<endl;
    }
};
class D : virtual public F,virtual public M
{
    int money;
public:
    D(int a,int b,int c,int d,int e): F(a,b) , M(c,d)
    {
        cout<<"D constructor called"<<endl;
        money = e;
    }
    void printDbal()
    {
        cout<<money<<endl;
    }
    // to resolve inheritance ambiguity
    void printGFbal()
    {
        F::printGFbal();
        // M::printGFbal();
    }
};
int main()
{
    D obj(10,100,50,200,300);   
    obj.printGFbal();
    obj.printFbal();
    obj.printMbal();
    obj.printDbal();
    return 0;
}