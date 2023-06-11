#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 1;

    switch (n)
    {
    case 1:
        continue;

    case 2:
        cout << "this is second case" << endl;

    default:
        cout << "this is default case" << endl;
    }

    return 0;
}
