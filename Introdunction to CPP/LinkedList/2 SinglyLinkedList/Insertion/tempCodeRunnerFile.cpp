#include <bits/stdc++.h>
using namespace std;

// How Insertion in Singly Linked List works ?
class Node
{
public:
    int data;
    Node *next;

    // constructor to create a new node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to insert a node at the beginning of the linked list
void insertAtBeginning(Node *&head, int data)
{
    // create a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// how to traverse a linked list
void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    Node *head = NULL;
    insertAtBeginning(head, 10);

    return 0;
}
