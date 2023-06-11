#include <iostream>
using namespace std;

int iseven(int n)
{
    if (n & 1)
    {
        return 0; // 0 means statement is false
    }
    return 1; // 1 means the statement is True
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if (iseven(n))
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
    return 0;
}
