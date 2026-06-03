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
    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = NULL;

    if (Head == NULL)
    {
        Head = newNode;
        return;
    }

    Node *temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
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

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintList(Head);

    Node *N1 = Find(Head, 2);

    InsertAfter(N1, 500);

    cout << "\nList after insertion: \n\n";
    PrintList(Head);

    return 0;
}