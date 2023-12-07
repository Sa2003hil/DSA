#include <bits/stdc++.h>
using namespace std;
// class template

template <class C>
class A
{
private:
    C a, b;

public:
    A(C a, C b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "sum of " << a << " and " << b << " is " << a + b << endl;
    }

    C add()
    {
        return a + b;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    A<int> a(2, 3);
    a.show();
    return 0;
}
