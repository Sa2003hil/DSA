// IF / ELSE condition

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int a = 3;      this is user defined method
    // int b = 5;

    int a, b; // this is user input method

    cout << "Enter the value of a here:" << endl;
    cin >> a;
    cout << "Enter the value of b here:" << endl;
    cin >> b;

    if (a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else
    {
        cout << "B is greater than A" << endl; // OUTPUT
    }
    return 0;
}

// question on conditional statements is on (questionsCON.cpp) file
