#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void display() = 0; // pure virtual function : Virtual function having no definition .
};

int main(int argc, char const *argv[])
{
    // A obj1; // this will give error because we cannot create object of a class having pure virtual function.

    // Abstract Class : A class having atleast one pure virtual function is called abstract class.

    return 0;
}
