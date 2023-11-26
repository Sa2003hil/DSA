// When a member function of a class is defined outside the class declaration, it allows for separation of the function implementation from the class definition. This is useful for improving code organization, modularity, and maintainability, especially for larger and more complex functions.

#include <bits/stdc++.h>
using namespace std;

class myClass
{
public:
    // decalration of function

    int add(int a, int b);
    void display();
};

// definition of function( here we have to use scope resolution operator to define the function outside the class)
int myClass::add(int a, int b)
{
    return a + b;
};

void myClass::display()
{
    cout << "This is display function" << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    myClass first;
    int result = first.add(10, 20);
    cout << result << endl;
    first.display();
    return 0;
}
