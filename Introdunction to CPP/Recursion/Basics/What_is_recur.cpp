// Recursion: When a function call itself until a specified condition is met.

#include <bits/stdc++.h>
using namespace std;
// Here there is no base case so it will run infinitely and at the end it gives segmentation fault or stack overflow error.
void func()
{
    cout << "1";
    func();
}

int main()
{
    func();
    return 0;
}