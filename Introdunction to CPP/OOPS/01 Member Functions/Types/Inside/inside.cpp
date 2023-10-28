// This is the member function inside the class

#include <bits/stdc++.h>
using namespace std;

class add
{
private:
    int a, b, c;

public:
    void sum()
    {
        cout << "Enter two numbers : " << endl;
        cin >> a >> b;
        c = a + b;
        cout << "Sum is : " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    add obj;
    obj.sum();

    return 0;
}
