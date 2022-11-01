#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next; //self refrencing structure
};


int main()
{
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *last = new Node;
    head->next = second;
    second->next = third;
    third->next = last;
    last->next = NULL;
    head->data = 10;
    second->data = 20;
    third->data = 30;
    last->data = 40;

    Node *itrr = new Node;
    itrr = head;
    // traversing linked list
    while (itrr != NULL)
    {
        cout<<itrr->data<<" ";
        itrr = itrr->next;
    }
    cout<<endl;
    Node *insert = new Node;
    insert->data = 2345;
    insert->next = third;
    second->next = insert;
    
    itrr = head;
    while (itrr != NULL)
    {
        cout<<itrr->data<<" ";
        itrr = itrr->next;
    }
    delete head,second,third,last,insert;

    return 0;
}