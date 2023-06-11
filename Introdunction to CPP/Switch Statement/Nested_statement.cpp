#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // we can use both int and char values in the switch statement
    int n = 1;
    char ch = '1';

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        cout << "First again" << endl;
        break;

    // this is nested switch statement
    case '1':
        switch (n)
        {
        case 1:
            cout << "this is nested switch statement" << endl;
            break;
        }
        break;
    default:
        cout << "This is default case" << endl;
    }

    return 0;
}
