/*

Time Compexity :- O(sqrt(n));

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            /*
            if n = 36


            1 * 36  cnt++

            2 * 18  cnt++

            3 * 12  cnt++

            4 * 9   cnt++

            6 * 6  --> here the numer 6 is repeating so dont count it

            */

            if ((n / i) != i) // check that is that number is repeating or not
            {
                cnt++;
            }
        }
    }

    if (cnt == 2)
     // Here count is 2 because we know that a number is prime if and only if they have factor of 1 and itself
        cout << "prime number" << endl;
    else
        cout << "Not prime number" << endl;

    return 0;
}
