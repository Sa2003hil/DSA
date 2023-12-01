// Friend Class :->  A friend class can access private and protected members of other class in which it is declared as friend.

#include <bits/stdc++.h>
using namespace std;

class A
{
    int x = 5;
    friend class B;
};

class B
{
public:
    void display(A &a)
    {
        cout << a.x << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    A a;
    B b;
    b.display(a);
    return 0;
}
