#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
// vector<int> isprime(N + 1, true);
bool sieve[1000000];

void createsieve()
{
    for (int i = 2; i <= N; i++)
    {
        sieve[i] = true; // intially mark all true
    }

    for (int i = 2; i * i < N; i++)
    {
        if (sieve[i] == true)
        {
            for (int j = i * i; j <= N; j += i) // mark the multiples false
            {
                sieve[i] = false;
            }
        }
    }
}

vector<int> generatePrimes(int N)
{
    vector<int> ds;
    for (int i = 2; i <= N; i++)
    {
        if (sieve[i] == true)
        {
            ds.push_back(i);
        }
    }
    return ds;
}

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        // step 1 : Generate all the primes till sqrt(r)
        vector<int> primes = generatePrimes(sqrt(r));

        // step 2: create a dummy array of size r - l + 1 and make everyone as 1
        int dummy[r - l + 1];
        for (int i = 0; i < r - l + 1; i++)
        {
            dummy[i] = 1;
        }

        //step 3: for all prime number 
        //  mark its multiples as false 

        for(auto pr : primes){
             
        }
    }

    return 0;
}
