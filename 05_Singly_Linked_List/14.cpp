/*

Singly Linked List : Insertion
        
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

int main()
{
    Node * Head = NULL;

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintList(Head);


    return 0;
}