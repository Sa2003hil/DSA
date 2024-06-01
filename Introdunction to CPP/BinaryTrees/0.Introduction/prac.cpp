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
        this->data = data;
        this->right = right;
        this->left = left;
    }
};

node *buildTree(node *root)
{
    int data;
    cin >> data;

    //  create a new node
    root = new node(data);
    // edge case
    if (data == -1)
    {
        return;
    }

    root->left = buildTree(root->left);
    root->right = buildTree(root->right);
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(int argc, char const *argv[])
{
    /* code */
    node *root = NULL;
    root = buildTree(root);

    inorder(root);
    return 0;
}
