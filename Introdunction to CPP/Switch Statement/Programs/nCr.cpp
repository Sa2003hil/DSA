#include <iostream>
using namespace std;

// function for factorial
int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r)
{

    int num = factorial(n);

    int deno = ((factorial(r)) * factorial(n - r));

    int ans = num / deno;

    return ans;
}

int main(int argc, char const *argv[])
{
    int n, r;
    cin >> n >> r;

    int answer = nCr(n, r);

    cout << answer << endl;

    return 0;
}
