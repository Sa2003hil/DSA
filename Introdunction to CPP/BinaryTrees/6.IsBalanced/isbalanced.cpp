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
        return NULL;
    }
    int left = height(root->left);
    int right = height(root->right);
    int ans = max(left, right) + 1;
    return ans;
}

bool isbalanced(node *root)
{
    if (root == NULL)
    {
        return true;
    }
    bool left = isbalanced(root->left);
    bool right = isbalanced(root->right);
    bool diff = abs(height(root->left) - height(root->right)) <= 1;
    if (left && right && diff)
    {
        return 1;
    }
    else
    {
        return false;
    }
}
int main()
{
    node *root = NULL;
    root = buildtree(root);

    bool balanced = isbalanced(root);
    if (balanced)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no";
    }

    return 0;
}