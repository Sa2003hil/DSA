// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     int real, imaginary;

// public:
//     // creating constructor to initialize complex number
//     Complex(int real = 0, int imaginary = 0)
//     {
//         this->real = real;
//         this->imaginary = imaginary;
//     }

//     void display()
//     {
//         cout << real << "+" << imaginary << "i" << endl;
//     }

//     // operator overloading
//     Complex operator+(Complex bb)
//     {
//         Complex cc;
//         cc.real = real + bb.real;
//         cc.imaginary = imaginary + bb.imaginary;
//         return cc;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     /* code */
//     Complex c1(5, 4), c2(2, 5);
//     Complex c3 = c1 + c2;

//     c3.display();
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Complex
// {
//     double real, imaginary;

// public:
//     Complex() : real(0.0), imaginary(0.0){};

//     Complex(double real, double imaginary)
//     {
//         this->real = real;
//         this->imaginary = imaginary;
//     }

//     void display()
//     {
//         cout << real << "+" << imaginary << "i" << endl;
//     }

//     // formula = (a+bi)*(c+di) = (ac - bd) * (ad+bc)i
//     Complex operator*(const Complex &bb)
//     {
//         Complex cc;
//         cc.real = (real * bb.real) - (imaginary * bb.imaginary);
//         cc.imaginary = (real * bb.imaginary) + (imaginary * bb.real);
//         return cc;
//     }
// };

// int main(int argc, char const *argv[])
// {
//     /* code */
//     Complex c1(2, 3), c2(2, 3);
//     Complex c3 = c1 * c2;

//     c3.display();

//     return 0;
// };
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str;
    cin >> str;

    int left = 0, right = str.length() - 1;
    bool isPallindrome = true;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            isPallindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPallindrome)
    {
        cout << "YEs" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
