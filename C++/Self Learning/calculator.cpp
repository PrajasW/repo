#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{ 
    float result;
public:
    void add(float,float);
    void sub(float,float);
    void multi(float,float);
    void div(float,float);
    void displayResultSimpleCalc()
    {
        cout<<"Result of simple calc: "<<result<<endl;
    }
};

void SimpleCalculator::add(float a, float b)
{
    result = a+b;
}
void SimpleCalculator::sub(float a, float b)
{
    result = a-b;
}
void SimpleCalculator::multi(float a, float b)
{
    result = a*b;
}
void SimpleCalculator::div(float a, float b)
{   
    result = a/b;
}


class ScientificCalculator
{
    float result;
public:
    void pow(float,float);
    void sq(float);
    void log(float);
    void displayResultSciCalc()
    {
        cout<<"Result of scientific calc: "<<result<<endl;
    }
};

void ScientificCalculator::pow(float a,float b)
{
    int temp =1;
    for (int i = 0; i < b; i++)
    {
        temp *= a;
    }
    result = temp;
}
void ScientificCalculator::sq(float a)
{
    result = a*a;
}
void ScientificCalculator :: log (float a)
{
    result = log10f(a);
}


class HybridCalculator : public SimpleCalculator,public ScientificCalculator
{

};
int main()
{
    HybridCalculator calc;
    calc.add(3,6);
    calc.displayResultSimpleCalc();
    calc.sub(3,6);
    calc.displayResultSimpleCalc();
    calc.multi(3,6);
    calc.displayResultSimpleCalc();
    calc.div(3,6);
    calc.displayResultSimpleCalc();
    
    calc.pow(3,3);
    calc.displayResultSciCalc();
    calc.sq(3);
    calc.displayResultSciCalc();
    calc.log(2);
    calc.displayResultSciCalc();
    
    return 0;
}