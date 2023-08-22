// Power of two

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int res;
    while (n > 0)
    {
        // odd case
        if (n & 1)
        {
            res = ((res) * (x) % m) % m;
            /*

            a^b = (a^b/2)^2 x 2         ----> Odd case

            In this, (a^b/2)^2 => res ans *2 is x

            */
        }
        x = ((x) % m * (x) % m) % m;
        // this is the power now which b / 2 but divide operations have high complexity
        // so we use Right shift(num>>1) which is = to /2

        n = n >> 1;
    }
    return res;
}

// Factorial of a number using arithematic modulation

#include <stdio.h>

int fact(int n);

int main()
{
    long long int n;

    printf("Enter the number here: ");
    scanf("%lld", &n);

    printf("The factorial is: %d\n", fact(n));
    return 0;
}

int fact(int n)
{
    int m = 1000000007;

    if (n == 0)
    {
        return 1;
    } // this is the base case in recursion

    int factNm1 = fact(n - 1);
    int factN = (1LL * factNm1 * n) % m;
    return factN;
}
