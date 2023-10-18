#include <bits/stdc++.h>
using namespace std;

int summation(int n)
{
    // this is the base case
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int prev = summation(n - 1);
        return n + prev;
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    int res = summation(n);
    cout << res << endl;

    return 0;
}
