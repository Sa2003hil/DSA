/*
Types of Linked List:
1. Singly Linked List
2. Doubly Linked List
3. Circular Linked List
4. Doubly Circular Linked List


Singly Linked List : Each node has data and a pointer to the next node. The last node has a pointer to null.

*/

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
        this->next = NULL;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Node *node1 = new Node(10); // creating first node

    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}
