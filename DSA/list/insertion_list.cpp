#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node* insertAtFirst(Node *head,int data)
{
    Node* ptr = new Node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
Node* insertAtEnd(Node *head,int data)
{
    Node* ptr = new Node;
    ptr->data = data;
    Node *itrr = head;
    while (itrr->next != NULL)
    {
        itrr = itrr->next;
    }
    itrr->next = ptr;
    ptr->next = NULL;
    return head;
}
Node* insertAtIndex(Node *head,int data,int index)
{
    Node* ptr = new Node;
    ptr->data = data;
    Node* itrr = head;
    for (int i = 0; i < index-1; i++)
    {
        itrr = itrr->next;
    }
    ptr->next = itrr->next;
    itrr->next = ptr;
    return head;
}
void display(Node* head)
{
    Node* itrr = head;
    while (itrr != NULL)
    {
        cout<<itrr->data<<" ";
        itrr = itrr->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = NULL;

    display(head);
    head = insertAtFirst(head,5);
    display(head);
    insertAtEnd(head,1);
    display(head);
    head= insertAtIndex(head,19,2);
    display(head);
    

    return 0;
}