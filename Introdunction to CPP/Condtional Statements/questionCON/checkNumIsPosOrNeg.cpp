#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    if (n > 0)
    {
        cout << "Number is positive" << endl;
    }
    else
    {
        if (n < 0)
        {
            cout << "Number is negative" << endl;
        }
        else
        {
            cout << "number is zero" << endl;
        }
    }
    return 0;
}
