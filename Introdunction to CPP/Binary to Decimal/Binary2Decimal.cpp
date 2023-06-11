#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int ans = 0, i = 0;
    while (n != 0)
    {
        int digit = n % 10;

        /* NOTE

        In case we are finding the

        1. BIT---> (Right Shift >>)    --> multilpy
        2. MODULUS ---> (Left Shit <<) --> divide

        */

        /*
         n = 1 1 0

        so digit = 110 % 10 = 0 ....do not return anything --> ans = 0


        now n = 110 / 10 = 11

        digit = 11 % 10 = 1

        ans = 0 + 2^1 = 2
        ........................

        now 11 / 10 = 1

        digit = 1

        ans = 2 + 2^2 = 6  (answer)

        */

        if (digit == 1)
        {
            ans = ans + (pow(2, i));
        }

        n /= 10;
        i++;
    }

    cout << ans << endl;

    return 0;
}
