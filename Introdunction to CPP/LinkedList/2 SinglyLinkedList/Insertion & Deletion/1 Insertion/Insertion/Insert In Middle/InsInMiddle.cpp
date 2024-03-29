#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor to create a new node
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
};

void insertAtTail(Node *&tail, int data)
{
    // create a new node
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    // inserting at the beginning
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    // starting mein temp head pe hai
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(temp, d);
        return;
    }

    // creating a new node for the position d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
};

void printLinkedList(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    printLinkedList(head);

    tail->next = new Node(20);
    tail = tail->next;
    printLinkedList(head);

    InsertAtPosition(tail, head, 1, 34);
    printLinkedList(head);
    return 0;
}
