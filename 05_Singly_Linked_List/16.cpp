/*

Singly Linked List : Insertion After 

*/
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void InsertAtBeginning(Node *&Head, int value)
{
    Node *newNode = new Node();


    newNode->value = value;
    newNode->next = Head;

    
    Head = newNode;
}

void PrintList(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << endl;
        Head = Head->next;
    }
}

Node * Find(Node *Head, int value){
    while (Head != NULL)
    {
        if (Head->value == value)
        {
            return Head;
        }
        Head = Head->next;
    }
    return NULL;
}

void InsertAfter(Node *N, int value)
{
    if(N == NULL)
    {
        cout << "Node is NULL" << endl;
        return;
    }

    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = N->next;

    N->next = newNode;
}

int main()
{
    Node * Head = NULL;

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintList(Head);

    Node * N1 = Find(Head, 2);

    InsertAfter(N1, 5);

    PrintList(Head);

    return 0;
}