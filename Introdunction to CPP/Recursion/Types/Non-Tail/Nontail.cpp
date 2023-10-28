// Non Tail Recursion : When the recursive call is not the last statement in the function then it is called non tail recursion.After returning from the recursive call, there is still some processing left to be done.

#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n == 0)
        return;
    else
    {
        func(n - 1);
        cout << n << " "; // This is the non tail recursion because after returning from the recursive call, there is still some processing left to be done.
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    func(5);
    return 0;
}
