/*

 To find the power of a number :
 1 << n = 2^n

-----------------------------------------------------------------------------


To find if the number is odd or even:
if (n & 1) {
    cout << "Odd";
} else {
    cout << "Even";
}


-----------------------------------------------------------------------------


*/

#include <bits/stdc++.h>
using namespace std;

void printBinnary(int n)
{
    for (int i = 10; i >= 0; --i)
    {
        cout << ((n >> i) & 1) << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 9;

    int i = 1;

    //  this is used to find if the current bit is set or not
    if ((n & (1 << i)) != 0)

    {
        cout << "SET" << endl;
    }
    else
        cout << "NOT SET" << endl;

    //  Now set the bth bit
    int a = 9, b = 1;
    printBinnary(a | (1 << b));

    // Now unset the bth bit
    printBinnary(a & ~(1 << b));

    return 0;
}
