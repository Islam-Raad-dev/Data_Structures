/*

Double Linked List: Delete Last Node

*/

#include <iostream>
using namespace std;

class Node
{

public:
    int Value;
    Node *Next;
    Node *Prev;
};

void InsertAtBeginning(Node *&Head, int Value)
{
    Node *NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = Head;
    NewNode->Prev = NULL;

    if (Head != NULL)
    {
        Head->Prev = NewNode;
    }

    Head = NewNode;
}

Node *Find(Node *Head, int Value)
{
    while (Head != NULL)
    {
        if (Head->Value == Value)
        {
            return Head;
        }
        Head = Head->Next;
    }
    return NULL;
}

void InsertAfter(Node *&Current, int Value)
{
    Node *NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = Current->Next;
    NewNode->Prev = Current;

    if (Current->Next != NULL)
    {
        Current->Next->Prev = NewNode;
    }

    Current->Next = NewNode;
}

void InsertAtEnd(Node *&Head, int Value)
{

    Node *NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = NULL;

    if (Head == NULL)
    {
        NewNode->Prev = NULL;
        Head = NewNode;
    }
    else
    {
        Node *Current = Head;
        while (Current->Next != NULL)
        {
            Current = Current->Next;
        }

        Current->Next = NewNode;
        NewNode->Prev = Current;
    }
}

Node *DeleteNode(Node *&Head, Node *&NodeToDelete)
{
    if (Head == NULL || NodeToDelete == NULL)
    {
        return NULL;
    }

    if (Head == NodeToDelete)
    {
        Head = NodeToDelete->Next;
    }

    if (NodeToDelete->Next != NULL)
    {
        NodeToDelete->Next->Prev = NodeToDelete->Prev;
    }

    if (NodeToDelete->Prev != NULL)
    {
        NodeToDelete->Prev->Next = NodeToDelete->Next;
    }

    delete NodeToDelete;
    return NULL;
}

void DeleteFirstNode(Node *&Head)
{
    if (Head == NULL)
    {
        return;
    }

    Node *Temp = Head;
    Head = Head->Next;

    if (Head != NULL)
    {
        Head->Prev = NULL;
    }

    delete Temp;
}

void DeleteLastNode(Node *&Head)
{
    if (Head == NULL)
    {
        return;
    }

    Node *Current = Head;
    while (Current->Next != NULL)
    {
        Current = Current->Next;
    }

    if (Current->Prev != NULL)
    {
        Current->Prev->Next = NULL;
    }
    else
    {
        Head = NULL;
    }

    delete Current;
}

void PrintList(Node *Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << " ";
        Head = Head->Next;
    }

    cout << endl;
}

int main()
{
    Node *Head = NULL;

    InsertAtBeginning(Head, 5);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);

    cout << "Before Deletion: ";
    PrintList(Head);

    DeleteLastNode(Head);
    cout << " After Deletion: ";
    PrintList(Head);

    return 0;
}