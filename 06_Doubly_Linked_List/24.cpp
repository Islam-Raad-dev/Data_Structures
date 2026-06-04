/*

Double Linked List: Insert After Node
         
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

Node* Find(Node *Head, int Value)
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
    Node * NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = Current->Next;
    NewNode->Prev = Current;

    if(Current->Next != NULL)
    {
        Current->Next->Prev = NewNode;
    }

    Current->Next = NewNode;

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
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);
    PrintList(Head);

    Node * N1 = Find(Head, 3);

    InsertAfter(N1, 4);

    cout << "After Inserting: " << endl;
    PrintList(Head);

    return 0;
}