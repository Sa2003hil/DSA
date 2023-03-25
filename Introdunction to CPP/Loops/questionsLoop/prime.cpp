#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1, flag = 0;

    while (i <= n)
    {
        if (i % 2 != 0)
        {
            cout << "Prime number : " << i << endl;
        }
        i += 1;
    }

    return 0;
}
