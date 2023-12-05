#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    /* code */
    int k, n;
    cin >> k >> n;
    string a[k], b[n];

    for (int i = 0; i < k; i++)
        cin >> a[i]; // TC:- O(n)
    for (int j = 0; j < n; j++)
        cin >> b[j]; // TC :- O(n)

    // now compare all elements of b
    for (int i = 0; i < n; i++)
    {
        int check = 1;
        // check for each element in the array a
        for (int j = 0; j < k; j++)
        {
            if (b[i].find(a[j]) != -1)
            {
                cout << "Good" << endl;
            }
        }
        if (b[i].length() >= 47)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
