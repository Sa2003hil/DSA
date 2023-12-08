#include <bits/stdc++.h>
using namespace std;

int counSetBits(int n)
{
    int count = 0;
    while (n)
    {
        // method 1

        // count += n & 1;
        // n = n >> 1;

        // method 2

        n = n & (n - 1);
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    cout << counSetBits(n) << endl;

    return 0;
}
