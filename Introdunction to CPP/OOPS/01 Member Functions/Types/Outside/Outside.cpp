/*

- Member functions can be defined outside the class
- Member functions can be defined outside the class using the scope resolution operator (::) along with the class name and function name.



*/

#include <bits/stdc++.h>
using namespace std;

class sum
{
private:
    int a, b, c;

public:
    void add();
};

// Member function defined outside the class with the help of scope resolution operator (::)
void sum::add()
{
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    c = a + b;
    cout << "Sum is : " << c << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    sum obj;
    obj.add();
    return 0;
}
