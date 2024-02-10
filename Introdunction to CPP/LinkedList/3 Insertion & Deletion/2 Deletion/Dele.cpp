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

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]); // head will be the first element in the array
    Node *mover = head;            // move is standing at the fist place
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;  // mover ka next temp hoga
        mover = mover->next; // mover will move to the next node
    }

    return head;
}

// Deletion of Head
Node *removeHead(Node *head)
{ // Remove the first node
    if (head == NULL)
    { // Check if list is empty
        return head;
    }
    Node *temp = head; // Save the first node
    head = head->next; // Move head to the next node
    delete temp;       // Delete the first node
    return head;       // Return the new head
}

// Deletion of Tail
Node *removeTail(Node *head)
{
    // edge case if the list is empty or has only one node
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    // traverse upto second last element
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // delete the last node
    delete temp->next;

    // make the second last node as the last node
    temp->next = NULL;

    return head;
}

// print the linked list
void printLinkedList(Node *head)
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
    vector<int> arr = {2, 3, 4, 5, 6};
    Node *head = convertArr2LL(arr);

    head = removeHead(head);
    printLinkedList(head);

    head = removeTail(head);
    printLinkedList(head);

    return 0;
}
