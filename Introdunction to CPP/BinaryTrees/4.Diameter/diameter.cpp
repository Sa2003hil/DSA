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
        data = d;
        left = right = NULL;
    }
};
node *buildtree(node *root)
{
    cout << "enter data for root" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter left" << data << endl;
    root->left = buildtree(root->left);
    cout << "enter right" << data << endl;
    root->right = buildtree(root->right);
    return root;
}

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;
    int ans = max(op1, (op2, op3)) + 1;
}

int main()
{
    node *root = NULL;
    root = buildtree(root);

    int ans = diameter(root);
    cout << ans;

    return 0;
}