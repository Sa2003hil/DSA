#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else
        return false;
}

bool isContigous(string s)
{
    int l = s.length(), count = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if (isVowel(s[i]) && isVowel(s[i + 1]))
        {
            count++;
            if (count == 3)
            {
                return true;
            }
        }
        else
        {
            count = 0;
        }
    }
    if (count != 3)
    {
        return false;
    }
}

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (isContigous(s))
        {
            cout << "Happy" << endl;
        }
        else
        {
            cout << "Sad" << endl;  what is tehe name 

        }
    }
    return 0;
}