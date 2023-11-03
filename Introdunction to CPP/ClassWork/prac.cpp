// 56 Which operator should be overloaded in the following code to make the program error free? #include <iostream>
#include <bits/stdc++.h>
using namespace std;
//
class Box
{
    int capacity;

public:
    Box() {}
    Box(double capacity)
    {
        this->capacity = capacity;
    }

    // Overload the equality (==) operator
    bool operator==(const Box &other) const
    {
        return capacity == other.capacity;
    }
};

int main(int argc, char const *argv[])
{
    Box b1(10);
    Box b2 = Box(14);
    if (b1 == b2)
    {
        cout << "Equal";
    }
    else
    {
        cout << "Not Equal";
    }
    return 0;
}
