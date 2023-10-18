// Parameterised Recursion : In this type of recursion we basically use paremters

#include <bits/stdc++.h>
using namespace std;

void summ(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    summ(i - 1, sum + i);
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    summ(n, 0);
    return 0;
}
