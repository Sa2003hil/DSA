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
        this->right = NULL;
        this->left = NULL;
    }
};

// Function to build a binary tree
node *buildtree(node *root)
{
    cout << "Enter data for node: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);

    root->left = buildtree(root->left);
    root->right = buildtree(root->right);
    return root;
}

node *findLCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    node *leftLCA = findLCA(root->left, n1, n2);
    node *rightLCA = findLCA(root->right, n1, n2);

    if (leftLCA && rightLCA)
    {
        return root;
    }
    else if (leftLCA != NULL && rightLCA == NULL)
    {
        return leftLCA;
    }
    else if (rightLCA != NULL && leftLCA == NULL)
    {
        return rightLCA;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    node *root = NULL;
    root = buildtree(root);
    int n1, n2;

    cin >> n1 >> n2;

    node *lca = findLCA(root, n1, n2);
    if (lca)
    {
        cout << lca->data << endl;
    }
    else
    {
        cout << endl;
    }
    return 0;
}
