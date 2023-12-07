/*
Templates are used to create generic functions in C++. Generic functions are functions that can accept any data type.

Syntax:
template <class T>
T add(T a, T b)
{
    return a + b;
}

*/

// function template

#include <bits/stdc++.h>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
};

int main(int argc, char const *argv[])
{
    /* code */
    cout << add<int>(2, 3) << endl;
    cout << add<float>(2.2, 3.3) << endl;
    cout << add<string>("Hello", "World") << endl;
    return 0;
}
