#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 2)
        {
            break; // this break statement is used to break the iteration.
        }
        cout << i << endl;
    }

    return 0;
}
