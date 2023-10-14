#include <bits/stdc++.h>
using namespace std;
void func(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    func(i - 1, i);
}

int main()
{
    int n;
    cin >> n;

    func(n, n);
    return 0;
}