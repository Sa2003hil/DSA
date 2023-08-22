#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 3;

    int *ptr = &n;
    cout << "Before: " << n << endl;
    (*ptr)++;

    cout << "After: " << n << endl;
    return 0;

    // How to copy the elements from one pointer to the another pointer

    int *q = ptr;

    cout << ptr << " - " << q << endl;
    cout << (*ptr) << " - " << (*q) << endl;
}
