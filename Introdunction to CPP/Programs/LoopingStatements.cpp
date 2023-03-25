// While loop

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i += 1;
        //  n = 5 ---->   1 2 3 4 5
    }
    return 0;
}
