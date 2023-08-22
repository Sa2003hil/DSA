/*
Euclid's Algo is used to find GCD of two numbers

formula :- gcd(a-b , b);
           gcd(a%b , b);


another imp formula using relation of lcm and gcd is :-


------------------------------------
|  lcm( a,b ) x  gcd( a,b ) = a*b  |
------------------------------------

*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            return a - b;
        }
        else if (b > a)
        {
            return b - a;
        }
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    cin >> a >> b;

    int ans = gcd(a, b);

    cout << "gcd of a is " << a << " and " << b << " is " << ans << endl;
    return 0;
}
