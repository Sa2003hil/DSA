// // This the way to solve the factorial problem using functional recursion

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     return n * fact(n - 1);
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int n;
//     cin >> n;

//     cout << fact(n);

//     return 0;
// }

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1; // Base case for factorial
    }
    return n * fact(n - 1);
}

void factorialNumbers(long long n)
{
    for (int i = 0; i <= n; i++)
    {
        // cout << fact(i) << " ";
        if (fact(i) <= n)
        {
            cout << fact(i) << ' ';
        }
        else
        {
            break;
        }
    }
    cout << endl; // Add a newline character to separate the output.
}

int main()
{
    long long n;
    cin >> n;
    factorialNumbers(n);
    return 0;
}