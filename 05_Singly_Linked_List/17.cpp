/*

Singly Linked List: Insert At End
                      
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

void InsertAtEnd(Node *&Head, int value)
{
    Node *NewNode = new Node();
    NewNode->value = value;
    NewNode->next = NULL;

    if (Head == NULL)
    {
        Head = NewNode;
        return;
    }

    Node *LastNode = Head;
    while (LastNode->next != NULL)
    {
        LastNode = LastNode->next;
    }
    LastNode->next = NewNode;
}

void PrintList(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->value << " ";
        Head = Head->next;
    }
    cout << endl;
}

Node *Find(Node *Head, int value)
{
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

void InsertAfter(Node *prev_Node, int value)
{
    if (prev_Node == NULL)
    {
        cout << "Node is NULL" << endl;
        return;
    }

    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = prev_Node->next;

    prev_Node->next = newNode;
}

int main()
{
    Node *Head = NULL;

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtBeginning(Head, 0);

    PrintList(Head);

    return 0;
}