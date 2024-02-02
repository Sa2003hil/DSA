#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

int lengthOfAll(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);// head will be the first element in the array
    Node *mover = head; // move is standing at the fist place
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);  
        mover->next = temp; 
        mover = mover->next;
    }

    return head;  
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> arr = {2, 3, 4, 5, 6};

    Node *head = convertArr2LL(arr);
    cout << head->data << endl;

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << lengthOfAll(head) << endl;

    return 0;
}
