#include <bits/stdc++.h>
using namespace std;

bool isUgly(int num)
{
    while (num % 2 == 0)
        num /= 2;
    while (num % 3 == 0)
        num /= 3;
    while (num % 5 == 0)
        num /= 5;

    return num == 1;
}

int findNthUgly(int num)
{
    int cnt = 1;
    int i = 1;

    while (cnt < num)
    {
        if (isUgly(i))
        {
            cnt++;
        }
        i++;
    }

    return i;
}

int main(int argc, char const *argv[])
{
    /* code */
    int num;
    cin >> num;

    int nthugly = findNthUgly(num);
    if (nthugly)
    {
        cout << nthugly << endl;
    }
    return 0;
}
