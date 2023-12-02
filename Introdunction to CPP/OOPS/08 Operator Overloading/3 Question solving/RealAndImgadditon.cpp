#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    // constructor to initialize the complex number
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // syntax for operator overloading (where c is object of Complex class)
    Complex operator+(Complex bb)
    {
        Complex cc;
        cc.real = real + bb.real;
        cc.imaginary = imaginary + bb.imaginary;
        return cc;
    }
};

int main(int argc, char const *argv[])
{
    Complex c1(5, 4), c2(2, 5);
    Complex c3 = c1 + c2;
    c3.display();

    return 0;
}
