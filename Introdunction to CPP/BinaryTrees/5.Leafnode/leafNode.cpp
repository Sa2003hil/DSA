#include <iostream>
#include <algorithm>
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
    cout << "Enter left child of " << data << ":\n";
    root->left = buildtree(root->left);
    cout << "Enter right child of " << data << ":\n";
    root->right = buildtree(root->right);
    return root;
}

// Function to find the Lowest Common Ancestor (LCA) of two nodes in a binary tree
node *findLCA(node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    // If either n1 or n2 matches the root's data, then root is the LCA
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    // Look for LCA in left and right subtrees
    node *left_LCA = findLCA(root->left, n1, n2);
    node *right_LCA = findLCA(root->right, n1, n2);

    // If both left and right subtrees return non-null, then root is the LCA
    if (left_LCA && right_LCA)
    {
        return root;
    }

    // Otherwise, return the non-null subtree
    // return (left_LCA != NULL) ? left_LCA : right_LCA;

    else if (left_LCA != NULL && right_LCA == NULL)
    {
        return left_LCA;
    }
    else if (right_LCA != NULL && left_LCA == NULL)
    {
        return right_LCA;
    }
}

int main()
{
    node *root = NULL;
    root = buildtree(root);

    int n1, n2;
    cout << "Enter two nodes for which you want to find LCA: ";
    cin >> n1 >> n2;

    node *lca = findLCA(root, n1, n2);
    if (lca)
    {
        cout << "LCA of " << n1 << " and " << n2 << " is: " << lca->data << endl;
    }
    else
    {
        cout << "One or both nodes not found in the tree!" << endl;
    }

    return 0;
}