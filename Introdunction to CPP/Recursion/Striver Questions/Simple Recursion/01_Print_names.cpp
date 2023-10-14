#include <bits/stdc++.h>
using namespace std;

void name(int i, int n)
{
    if (i > n) // Base Condition (if i is greater than n then return(5>4))
    {
        return;
    }
    else
    {
        cout << "sahil" << endl;
        name(i + 1, n);
    }
}

int main()
{
    int n; // 5
    cin >> n;
    name(1, n);

    return 0;
}