#include <bits/stdc++.h>
using namespace std;

int summ(int n)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }
    return n + summ(n - 1); // Here we are using a function call inside a function call this is the functional recursion
}

int main(int argc, char const *argv[])
{
    /* code */

    int n;
    cin >> n;

    cout << summ(n);

    return 0;
}
