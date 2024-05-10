#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void preorder(node *root)
{
    if (node == NULL)
    {
        return;
    }

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

int main(int argc, char const *argv[])
{
    /* code */
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    return 0;
}
