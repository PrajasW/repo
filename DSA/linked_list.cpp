#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int);
    void insertAtIndex(int,int);
    void insertAtEnd(int);
    void deleteAtIndex(int);
    void deleteAtEnd();
    void push(int);
    int pop();
    void display();
};
Node::Node(int data=0)
{
    this->data = data; //default value of data is 0
    this->next = NULL;
}
void Node::insertAtIndex(int data,int index)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *itrr = this;
    for (int i = 0; i < index-1; i++)
    {
        itrr = itrr->next;
    }
    ptr->next = itrr->next;
    itrr->next = ptr;
}
void Node::insertAtEnd(int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *itrr = this;
    while (itrr->next != NULL)
    {
        itrr = itrr->next;
    }
    itrr->next = ptr;
    // ptr->next = NULL is predefined in Constructor
}
void Node::deleteAtIndex(int index)
{
    Node *itrr1 = this;
    Node *itrr2 = this->next;
    for (int i = 0; i < index-1; i++)
    {
        itrr1 = itrr1->next; //will point to before index
        itrr2 = itrr2->next; //will point at index
    }
    itrr1->next = itrr2->next;
    delete itrr2;
}
void Node::deleteAtEnd()
{
    Node *itrr1 = this;
    Node *itrr2 = this->next;
    while (itrr2->next != NULL)
    {
        itrr1 = itrr1->next;
        itrr2 = itrr2->next;
    }
    itrr1->next = NULL;
    delete itrr2;
}
void Node::push(int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    Node *itrr = this;
    while (itrr->next != NULL)
    {
        itrr = itrr->next;
    }
    itrr->next = ptr;
    ptr->next = NULL;
}
void Node::display()
{
    Node *itrr = this;
    while (itrr != NULL)
    {
        cout<<itrr->data<<" ";
        itrr = itrr->next;
    }
    cout<<endl;
}
int Node::pop()
{
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
    return ret;
}
int main()
{
    Node *head = new Node(2);
    head->push(5);
    head->push(1);
    head->push(6);
    head->push(7);
    head->display();
    head->insertAtIndex(3,3);
    head->display();
    head->insertAtEnd(29);
    head->display();
    head->deleteAtIndex(2);
    head->display();
    head->deleteAtEnd();
    head->display();
    int i = head->pop();
    head->display();
    cout<<i;
    return 0;
}