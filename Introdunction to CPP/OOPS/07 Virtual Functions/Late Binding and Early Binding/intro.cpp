// virtual base class : when a class is inherited by multiple classes and if the inherited classes are inherited by another class then the base class is inherited multiple times by the derived class. To avoid this we use virtual base class.

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void display()
    {
        cout << "Base Class" << endl;
    }
};

class B : public A
{
    // virtual function is redefined in derived class
public:
    void display()
    {
        cout << "Derived Class" << endl;
    }
};

int main(int argc, char const *argv[])
{
    // B obj1;
    // obj1.display(); // this is called early binding or static binding or compile time polymorphism

    // now we will see late binding or dynamic binding or run time polymorphism
    // firstly we'll create a pointer of base class

    // A *baseptr;
    // A baseobj;
    // baseptr = &baseobj;
    // baseptr->display(); // ans : Base Class (because ptr is of base class and display() is also of base class)

    // but when we do this

    A *baseptr;
    B derivedobj;
    baseptr = &derivedobj;
    baseptr->display(); // this also gives ans : Base Class , because ptr is of base class and display() is also of base class to avoid this we'll add virtual keyword in front of base class this will make the display() of which object is pointed by ptr to be called.

    return 0;
}
