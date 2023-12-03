#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    string s;
    getchar(); // If you use getline(cin, s); immediately without getchar(), it may read the newline character as an empty line and not wait for the user to input the actual string.

    getline(cin, s);
    int length = s.length();

    for (int i = 0; i < min(n, length); i++)
    {
        cout << s[i];
    }
    cout << endl;
    return 0;
}
