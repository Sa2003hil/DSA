#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 3;

    int *ptr = &n;
    cout << "Before: " << *(&n) << endl;
    (*ptr)++;

    cout << "After: " << *ptr << endl;

    // How to copy the elements from one pointer to the another pointer

    int *q = ptr;

    cout << *q << endl;
    cout << ptr << " - " << q << endl;       // same address
    cout << (*ptr) << " - " << (*q) << endl; // same values

    return 0;
}
