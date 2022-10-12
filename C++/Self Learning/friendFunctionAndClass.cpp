#include <iostream>
using namespace std;

class ComplexNumber;


class Calculator
{
public:
    void addComplexNumbers(ComplexNumber,ComplexNumber);  
};

class ComplexNumber
{
private:
    int a;
    int b;
    friend void displayComplexNumber(ComplexNumber);
    // by declaring member function of class as friend
    friend void Calculator::addComplexNumbers(ComplexNumber,ComplexNumber); 
    // declaring class as friend
    // friend class Calculator;

public:
    void setNumber(int,int);
};

void Calculator::addComplexNumbers(ComplexNumber obj1,ComplexNumber obj2)
{
    cout<<(obj1.a+obj2.a)<<" + "<<(obj1.b+obj2.b)<<"i"<<endl;
}

void ComplexNumber::setNumber(int x,int y)
{
    a=x;
    b=y;
}

void displayComplexNumber(ComplexNumber c)
{
    cout<< c.a <<" + "<< c.b << "i"<<endl;
}

int main()
{
    ComplexNumber num1;
    num1.setNumber(4,5);
    displayComplexNumber(num1);
    ComplexNumber num2;
    num2.setNumber(3,6);
    displayComplexNumber(num2);
    
    Calculator calc;
    calc.addComplexNumbers(num1,num2);
    return 0;
}