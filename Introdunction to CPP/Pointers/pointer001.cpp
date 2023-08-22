#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    // & - stores address of the variable
    int num = 23;
    int *ptr = &num;

    // * used to print the value at that address
    cout << *(&num) << endl;
    cout << *ptr << endl;

    cout << "Address of num is :" << ptr << endl;

    cout << "size of the integer is: " << sizeof(int) << endl;
    cout << "size of the pointer is " << sizeof(ptr) << endl;

    // There  are two ways to intialize the pointers 1st: -->
    int in = 2;

    int *q = &in;
    cout << *(&in) << endl;

    // second -->
    int i = 6;
    int *p = 0;
    p = &i;
    cout << p << endl;
    return 0;
}
