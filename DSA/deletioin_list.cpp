#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
Node* deleteAtFirst(Node *head)
{
    Node *ptr = head->next;
    delete head;
    return ptr;
}
void deleteAtIndex(Node *head,int index)
{
    Node *itrr = head;
    for (int i = 0; i < index-1; i++)
    {
        itrr = itrr->next;       
    }
    Node *temp = itrr;
    itrr = itrr->next; //now itrr points to node to delete       
    temp->next = itrr->next;
    delete itrr;
}
void deleteLastNode(Node* head)
{
    Node* itrr = head;
    while ((itrr->next)->next != NULL) // to access the 2nd last (penultimate) element
    {
        itrr = itrr->next;
    }
    delete itrr->next;
    itrr->next = NULL;
}
void deleteItemWithKey(Node *head,Node *key)
{
    Node *itrr = head;
    bool found = false;
    int counter=0;
    while (itrr->next != NULL)
    {
        counter++;
        if (itrr == key)
        {
            found = true;
            break;
        }
        itrr = itrr->next;
    }
    if (found == false)
    {
        cout<<"error: key doesn't match"<<endl;
    }
    else
    {
        deleteAtIndex(head,counter);
    }
    
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
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;

    head->data = 10;
    head->next = first;
    first->data = 20;
    first->next = second;
    second->data = 30;
    second->next = third;
    third->data = 40;
    third->next = fourth;
    fourth->data = 50;
    fourth->next = fifth;
    fifth->data = 60;
    fifth->next = NULL;

    display(head);
    // CASE 1: deleting first node
    head = deleteAtFirst(head);
    display(head);
    // CASE 2: deleting node in between
    deleteAtIndex(head,2);
    display(head);
    // CASE 3: deleting last node
    deleteLastNode(head);
    display(head);
    // CASE 4: delete a node with given value
    deleteItemWithKey(head,second);
    display(head);
    return 0;
}