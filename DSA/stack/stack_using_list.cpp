#include <iostream>
using namespace std;

class Node
{
    int used;
    int size;
    int data;
public:
    Node *next;
    Node(int);
    void push(int);
    int pop();
    int peak(); // will return the last value of stack
    int isFull();
    int isEmpty();
};
Node::Node(int size = 0)
{
    this->next = NULL;
    this->size = size;
    used = 0;
}
void Node::push(int data)
{
    if (isFull())
    {
        cout<<"stack overflow"<<endl;
        delete this;
    }
    
    Node *ptr = new Node;
    ptr->data = data;
    Node *itrr = this;
    while (itrr->next != NULL)
    {
        itrr = itrr->next;
    }
    itrr->next = ptr;
    ptr->next = NULL;
    used++;
}
int Node::pop()
{
    if (isEmpty())
    {
        cout<<"stack empty"<<endl;
        delete this;
    }
    int ret;
    Node *itrr1 = this;
    Node *itrr2 = this->next;
    while (itrr2->next != NULL)
    {
        itrr1 = itrr1->next;
        itrr2 = itrr2->next;
    }
    ret = itrr2->data;
    itrr1->next = NULL;
    delete itrr2;
    used--;
    return ret;
}
int Node::peak()
{
    Node* itrr = this;
    while (itrr->next != NULL)
    {
        itrr = itrr->next;
    }
    return itrr->data;
}
int Node::isFull()
{
    if (used == size)
    {
        return 1;
    }
    return 0;
}
int Node::isEmpty()
{
    if (used == 0)
    {
        return 1;
    }
    return 0;   
}
int main()
{
    Node *head = new Node(4);
    head->push(5);
    head->push(1
    );
    head->push(6);
    head->push(7);
    cout<<head->pop()<<endl;
    cout<<head->pop()<<endl;
    cout<<head->pop()<<endl;
    cout<<head->pop()<<endl;
    return 0;
}