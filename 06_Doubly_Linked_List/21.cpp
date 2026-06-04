/*

Doubly Linked List
           
*/
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node * next;
    Node * prev;
};

int main()
{
    Node * Head = NULL;
    Node * Node1 = NULL;
    Node * Node2 = NULL;
    Node * Node3 = NULL;

    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->data = 1;
    Node2->data = 2;
    Node3->data = 3;

    Node1->next = Node2;
    Node1->prev = NULL;

    Node2->next = Node3;
    Node2->prev = Node1;

    Node3->next = NULL;
    Node3->prev = Node2;

    Head = Node1;

    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }

    return 0; 
}