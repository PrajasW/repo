#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Stack
{
    int top;
    int size;
    int *arr;
public:
    void set_size(int);
    Stack();
    Stack(int);
    ~Stack();
    int isEmpty();
    int isFull();   
    void push(int);
    int pop();
    int peak();
    friend int parathesisCheck(string);
};
void Stack::set_size(int size)
{
    this->size = size;
    delete arr;
}
Stack::Stack(int size)
{
    top = -1;
    this->size = size;
    arr = new int[size];
}
Stack::~Stack()
{
    delete arr;
}
int Stack::isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Stack::isFull()
{
    if (!(top < size))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Stack::push(int data)
{
    if (isFull())
    {
        cout<<"stack overflow"<<endl;
    }
    top++;
    arr[top] = data;   
}
int Stack::pop()
{
    if (isEmpty())
    {
        cout<<"stack empty"<<endl;
    }
    int pop_val = arr[top];
    top--;
    return pop_val;
}
int Stack::peak()
{
    return arr[top];
}

int parathesisCheck(string str)
{
    Stack chk(100);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            chk.push(1);
        }
        else if (str[i] == ')')
        {
            if (chk.top-1 < -1)
            {
                return -1;  // -1 implies too many ")" brackets
            }
            chk.pop();
        }
    }
    if (chk.top > -1)
    {
        return 1;   // 1 impolies too many "(" brackets
    }
    return 0;   //0 implies that everything checked properly
} 

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string expression;
    getline(cin,expression);
    return 0;
}