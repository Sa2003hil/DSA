/*

sieve of erathosthenis

Time Complexity : O(log(log(n)))

*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isprime(N + 1, true); // here we put all the numbers as prime initially ..

int main(int argc, char const *argv[])
{

    int count = 0;
    isprime[0] = isprime[1] = false; // 0 and 1 are not prime numbers

    // for (int i = 2; i < N; i++)
    for (int i = 2; i * i < N; i++)
    {
        if (isprime[i])
        {
            count++;
            // for (int j = 2 * i; j < N; j += i)
            for (int j = i * i; j < N; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;

        if (isprime[num])
        {
            cout << "prime number" << endl;
        }
        else
        {
            cout << "not prime number" << endl;
        }
    }
}
