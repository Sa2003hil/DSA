//  Addition in operator Overloading


// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     int real, imag;

// public:
//     // initializing a constructor
//     Complex(int real = 0, int imag = 0)
//     {
//         this->real = real;
//         this->imag = imag;
//     }

//     // creating member function
//     void Display()
//     {
//         cout << real << "+" << imag<<"i";
//     }

//     // operator overloading

//     Complex operator+(const Complex &bb)
//     {
//         Complex cc; // creating object
//         cc.real = real + bb.real;
//         cc.imag = imag + bb.imag;
//         return cc;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     /* code */
//     Complex c1(5, 4), c2(2, 5);
//     Complex c3 = c1 + c2;

//     c3.Display();

//     return 0;
// }
// ----------------------------------------------------------------------------------------------
// Multiplication in operator overloading

// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     double real, imag;

// public:
//     Complex() : real(0.0), imag(0.0){};

//     Complex(double real, double imag)
//     {
//         this->real = real;
//         this->imag = imag;
//     }

//     void Display()
//     {
//         cout << real << "+" << imag << "i" << endl;
//     }

//     Complex operator*(const Complex &bb)
//     {
//         // formula for multiplication is (a+bi)*(c+di) = (ac - bd) + (ad + bc)i
//         Complex cc;
//         cc.real = (real * bb.real) - (imag * bb.imag);
//         cc.imag = (real * bb.imag) + (imag * bb.real); // Fix this line
//         return cc;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     /* code */
//     Complex c1(2.0, 3.0), c2(4.0, 2.0);
//     Complex c3 = c1 * c2;
//     c3.Display(); // Display the result
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    double real, imag;

public:
    Complex() : real(0.0), imag(0.0) {}

    Complex(double real, double imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }

    Complex operator/(Complex const &bb)
    {
        // formula a+ib/c+id = (ac + bd)/(c2 + d2)  + (bc-ad)/(c2+d2)
        Complex cc;
        double denominator = (bb.real * bb.real) + (bb.imag * bb.imag);

        cc.real = (real * bb.real + imag * bb.imag) / denominator;
        cc.imag = (imag * bb.real - real * bb.imag) / denominator;
        return cc;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Complex c1(4.0, 3.0);
    Complex c2(1.0, 2.0);

    Complex c3 = c1 / c2;

    c3.display();

    return 0;
}
