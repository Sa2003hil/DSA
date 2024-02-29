#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // Constructor
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

void insertAtHead(Node *&head, int data)
{

    // Create a new Node
    Node *temp = new Node(data);
    // firstly temp ke next ko head mein daal do
    temp->next = head;
    // then head ke prev ko temp mein daal do
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
}

int main(int argc, char const *argv[])
{
    /* code */
    Node *node1 = new Node(10);
    Node *head = node1;

    // print(head);

    insertAtHead(head, 11);
    print(head);
    cout << getLength(head) << endl;
    return 0;
}
