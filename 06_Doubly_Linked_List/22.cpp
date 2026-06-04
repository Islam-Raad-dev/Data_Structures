/*

Doubly Linked List: Insert At Beginning

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

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 1);

    PrintList(Head);

    return 0;
}