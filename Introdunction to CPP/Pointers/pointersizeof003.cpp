#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10];

    cout << sizeof(arr) << endl; // in case of arrays the answer is number of elements x 4(int size)

    cout << sizeof(&arr) << endl;

    cout << "in case of pointers pointing value at 1st position occupy 4 bytes :- " << sizeof(*arr) << endl;

 
    int *ptr = &arr[0];

    cout << sizeof(ptr) << endl; // in 32-bit it takes 4 bytes and in 64-bit it takes 8 bytes
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    return 0;
}
