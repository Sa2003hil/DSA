#include <bits/stdc++.h>
using namespace std;

void print(int i, int n, vector<string> &res)
{
    if (i <= n)
    {
        res.push_back("coding ninjas");
        print(i + 1, n, res);
        // cout << "Coding Ninjas" << endl;
        // print(i + 1, n);
    }
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    print(1, n, res);

    return 0;
}
