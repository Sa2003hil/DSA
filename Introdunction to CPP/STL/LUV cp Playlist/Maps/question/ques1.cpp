/*
Given N strings,print unique strings in lexiographical order with their frequency


N<= 10^5
|S| <= 100

*/
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        // m[s] = m[s] + 1;
        m[s]++;
    }
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}

/*
Answer:

abc
ghj
jkl
ghj
ghj
abc

--------------- keys are in sorted order
abc 3
def 1
ghj 3
jkl 1


*/
