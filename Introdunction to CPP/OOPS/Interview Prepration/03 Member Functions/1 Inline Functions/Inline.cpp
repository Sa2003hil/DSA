// In C++, class functions can be defined inline directly within the class declaration.When a member function is defined inline, the compiler inserts the function code directly at the call site, avoiding the overhead of a separate function call.

#include <bits/stdc++.h>
using namespace std;

class Hero
{
public:
    // inline member function
    void display()
    {
        cout << "This is inline function" << endl;
    }

    inline int add(int a, int b)
    {
        return a + b;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    Hero first;
    first.display();

    // The function call is replaced with the actual code .
    int result = first.add(10, 20);

    /*
    advantage of using inline
     1. It reduces the function call overhead.
     2. It reduces the execution time.

    */

    return 0;
}
