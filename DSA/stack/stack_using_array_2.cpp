#include <iostream>
using namespace std;

class Stack
{
    int *array;
    int used;
    int size;
public:
    Stack(int);
    void set_size(int);
    int get_size();
    void push(int);
    int pop();
    int isFull();
    int isEmpty();
};
Stack::Stack(int size=0)
{
    this->size = size;
    array = new int[size];
    used = 0;
}
void Stack::set_size(int size)
{
    delete array;
    this->size = size;
    array = new int[size];
    used = 0;
}
int Stack::get_size()
{
    return size;
}
void Stack::push(int data)
{
    if (isFull() == 1)
    {
        cout<<"stack overflow"<<endl;
        delete this;
    }
    array[used] = data;
    used++;
}
int Stack::pop()
{
    if (isEmpty() == 1)
    {
        cout<<"stack empty nothing to pop"<<endl;
        delete this;
    }
    // used always points to one point ahead
    used--;
    int ret = array[used];
    return ret;
}
int Stack::isFull()
{
    if (used == size)
    {
        return 1;
    }
    return 0;
}
int Stack::isEmpty()
{
    if (used == 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    Stack st;
    st.set_size(5);
    st.push(1);
    st.push(2);
    st.pop();
    st.push(6);
    st.push(3);
    st.push(4);
    st.push(5);
    for (int i = 0; i < st.get_size(); i++)
    {
        cout<<st.pop()<<" ";
    }
    return 0;
}