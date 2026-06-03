/*

Singly Linked List: Delete Node
                
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

Node *DeleteNode(Node *Head, int value)
{
    if (Head == NULL)
    {
        return Head;
    }

    if (Head->value == value)
    {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
        return Head;
    }

    Node *current = Head;
    while (current->next != NULL && current->next->value != value)
    {
        current = current->next;
    }

    if (current->next == NULL)
    {
        cout << "Value not found in the list." << endl;
        return Head;
    }

    Node *temp = current->next;
    current->next = current->next->next;
    delete temp;

    return Head;
}

int main()
{
    Node *Head = NULL;

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtEnd(Head, 4);
    InsertAtEnd(Head, 5);

    PrintList(Head);

    DeleteNode(Head, 2);
    cout << "List after deletion: " << endl;
    PrintList(Head);

    return 0;
}
