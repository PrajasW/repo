#include <iostream>
using namespace std;

class Node
{
public:
    int size;
    int data;
    Node *prev;
    Node *next;
    Node(int);
    void insertAtIndex(int,int);
    void insertAtEnd(int);
    void deleteAtIndex(int);
    void deleteAtEnd();
    void push(int);
    int pop();
    void displayStartToEnd();
    void display();
};
Node::Node(int data=0)
{
    this->size = 1;
    this->prev = NULL;
    this->next = NULL;
    this->data = data;
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
    ptr->prev = itrr->prev;
    itrr->next = ptr;
    this->size++;
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
    ptr->prev = this;
    itrr->next = ptr;
    // ptr->next = NULL is predefined in Constructor
    this->size++;
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
    itrr1->prev = itrr2->prev;
    itrr1->next = itrr2->next;
    delete itrr2;
    this->size--;
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
    this->size--;
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
    ptr->prev = itrr;
    ptr->next = NULL;
    this->size++;
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
    this->size--;
}
void Node::displayStartToEnd()
{
    Node *itrr = this;
    while (itrr->next != NULL) //do till itrr->last node
    {
        cout<<itrr->data<<" ";
        itrr = itrr->next;
    }
    cout<<(itrr->data)<<" ";
    itrr = itrr->prev;
    while (itrr != NULL) //do till itrr-> (before 1st node)
    {
        cout<<itrr->data<<" ";
        itrr = itrr->prev;
    }
    cout<<endl;    
    
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
int main()
{
    Node *head = new Node(2);
    head->push(5);
    head->push(1);
    head->push(6);
    head->push(7);
    head->displayStartToEnd();
    // head->display();
    // head->insertAtIndex(3,3);
    // head->display();
    // head->insertAtEnd(29);
    // head->display();
    // head->deleteAtIndex(2);
    // head->display();
    // head->deleteAtEnd();
    // head->display();
    // int i = head->pop();
    // head->display();
    // cout<<i;
    return 0;
    return 0;
}