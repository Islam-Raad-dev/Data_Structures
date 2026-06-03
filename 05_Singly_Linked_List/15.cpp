/*

Singly Linked List : Find 

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

Node* Find(Node *Head, int value)
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

int main()
{
    Node * Head = NULL;

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintList(Head);

    Node * N1 = Find(Head, 2);

    if(N1 != NULL)
    {
        cout << "Found: " << N1->value << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}