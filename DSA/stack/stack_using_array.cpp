#include <iostream>
using namespace std;

class Stack
{
    int *array = NULL;
    int used;
    int *head;
    int size;
public:
    Stack(int);
    ~Stack();
    void set_size(int);
    int isEmpty();
    int isFull();
    void push(int);
    int pop();
    int peak(int);
    void memoryStat();
};
int Stack::isEmpty()
{
    if (used == 0)
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
    if (used == size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
Stack::Stack(int size=0)
{
    this->size = size;
    delete array;
    array = new int[size];
    head = array;
    used = 0;
}
Stack::~Stack()
{
    delete array;
}
void Stack::set_size(int size)
{
    this->size = size;
    delete array;
    array = new int[size];
    head = array;
    used = 0;
}
void Stack::push(int data)
{
    if (isFull())
    {
        cout<<"stack overflow"<<endl;
        delete this; //deletes the obj to give error
    }
    else
    {    
        *head = data;
        used++;
        head = array+used;
    }
}
int Stack::pop()
{
    // head always points onestep ahead of last value
    if (isEmpty() == 1)
    {
        cout<<"stack is empty"<<endl;
        delete this;
    }
    head--;
    int data = *head;
    used--;
    head = array+used;
    return data;
}
int Stack::peak(int index)
{
    return array[index];
}
void Stack::memoryStat()
{
    cout<<used<<" filled out of "<<size<<endl;
}
int main()
{
    Stack st(3);
    st.push(3);
    st.push(2);
    cout<<st.pop()<<endl;
    st.push(1);
    st.push(3);
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    return 0;
}