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
        delete this;
    }
    top++;
    arr[top] = data;   
}
int Stack::pop()
{
    if (isEmpty())
    {
        cout<<"stack empty"<<endl;
        delete this;
    }
    int pop_val = arr[top];
    top--;
    return pop_val;
}
int Stack::peak()
{
    return arr[top];
}