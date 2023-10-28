#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << n << " ";
        func(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    func(5);
    return 0;
}
