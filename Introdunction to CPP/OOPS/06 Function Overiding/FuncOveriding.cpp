/*
Function Overloading :
    ->  It is a feature in which a class can have more than one function with same name but different parameters.

*/

#include <bits/stdc++.h>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Base Class" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Derived Class" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    B obj1;
    obj1.display();
    return 0;
}
