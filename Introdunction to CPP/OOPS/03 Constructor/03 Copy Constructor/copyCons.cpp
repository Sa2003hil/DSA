#include <bits/stdc++.h>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    //  IMPORTANT!!---> When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout << "Copy constructor called!!!" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Number x, y, z(45), z2;

    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not invoked because humne pehle se hi z2 ko define kar rakha hai or hum yhan sirf value assign kar rahe hain

    Number z3 = x; // Copy constructor invoked (This is not an assignment operator)
    z3.display();
    return 0;
}
