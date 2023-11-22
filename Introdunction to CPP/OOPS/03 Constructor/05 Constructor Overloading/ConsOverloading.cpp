//  We can have more than one constructor in a class with same name, as long as each has a different list of arguments.This concept is known as Constructor Overloading and is quite similar to function overloading.

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your Number is " << a << "+" << b << "i" << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Complex c1(4, 5);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    return 0;
}
