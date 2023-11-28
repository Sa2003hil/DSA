#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Display of A" << endl;
    }
};

class B : public A
{
public:
    void display1()
    {
        cout << "Display of B" << endl;
    }
};

class C : public A
{
public:
    void display2()
    {
        cout << "Display of C" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    A obj1;
    obj1.display();

    B obj2;
    obj2.display();
    obj2.display1();

    C obj3;
    obj3.display();
    obj3.display2();

    return 0;
}
