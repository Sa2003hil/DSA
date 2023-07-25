#include <bits/stdc++.h>
using namespace std;

void reversestr(string &str, int s, int e)
{
    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
}

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str); // Using getline to read the whole line with spaces.

    int leng = str.length();
    int start = 0;

    for (int i = 0; i <= leng; i++)
    {
        if (str[i] == ' ' || i == leng)
        {
            reversestr(str, start, i - 1);
            start = i + 1;
        }
    }

    cout << str << endl;
    return 0;
}
