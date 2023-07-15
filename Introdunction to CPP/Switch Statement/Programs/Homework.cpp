#include <iostream>
using namespace std;

int countsetbits(int n)
{
    int count = 0;

    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << countsetbits(n) << endl;

    return 0;
}
