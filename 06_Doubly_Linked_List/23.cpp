/*

Double Linked List: Find Node

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
    Node * NewNode = new Node();
    NewNode->Value = Value;
    NewNode->Next = Head;
    NewNode->Prev = NULL;
    
    if(Head != NULL)
    {
        Head->Prev = NewNode;
    }

    Head = NewNode;

}

void PrintList(Node *Head)
{
    while(Head != NULL)
    {
        cout << Head->Value << " ";
        Head = Head->Next;
    }
}

int main()
{
    Node *Head = NULL;

    InsertAtBeginning(Head, 5);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);

    PrintList(Head);

    return 0;
}