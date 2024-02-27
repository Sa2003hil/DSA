#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void deleteFirstNode(int position, Node *&head)
{
    // deleting first Node
    if (position == 1)
    {
        head = head->next;
        return;
    }
}

void deleteAnyNodeInMiddle(int position, Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;

    int cnt = 1;
    while (cnt <= position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;
    delete curr;
}

void insertAtBeginning(Node *&head, int data)
{
    // create a new node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

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
    Node *node1 = new Node(1);
    Node *head = node1;

    Node *node2 = new Node(2);
    node1->next = node2;

    Node *node3 = new Node(3);
    node2->next = node3;

    printLinkedList(head);
    deleteAnyNodeInMiddle(1, head);
    printLinkedList(head);

    return 0;
}
