#include <iostream>
using namespace std;

class Node
{
    static int size;
    int data;
    Node* prev;
public:
    Node(int);
    void push(int);

};
Node::Node(int data = 0)
{
    this->data = data;
    prev = NULL;
}