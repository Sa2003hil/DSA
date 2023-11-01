//  Tail Recursion : When the recursive call is the last statement in the function then it is called tail recursion.

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
