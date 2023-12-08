#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    getline(cin, str);

    int start = 0;
    // cout << str.length();
    int end = str.length() - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << str << endl;
    /* code */
    return 0;
}