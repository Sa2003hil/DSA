#include <bits/stdc++.h>
using namespace std;

char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int checkpallindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (tolowercase(name[s]) != tolowercase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int getlength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    char name[20];
    cin >> name;

    cout << tolowercase(name) << endl;

    int leng = getlength(name);

    cout << checkpallindrome(name, leng) << endl;

    return 0;
}
