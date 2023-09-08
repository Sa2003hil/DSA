/*
Important points

1. * - value at
2. & - address of

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[4] = {21, 23, 24, 25};

    // int *ptr1 = &arr;

    cout << arr << endl;
    cout << *arr << endl;       // ---> points first element in the array
    cout << *arr + 1 << endl;   // --> value at first address of the array +1
    cout << *(arr + 1) << endl; // --> value at (arr+1)--> second address of the array
    cout << (*arr) + 1 << endl; // value at first address + 1;

    // forumla : arr[i] = *(arr+i)

    cout << "value at index 2: " << *(arr + 2) << endl;

    // formula : i[arr] = *(i+arr)  ---> both formula1 and formula2  is valid

    int i = 2;
    cout << i[arr] << endl;

    return 0;
}
