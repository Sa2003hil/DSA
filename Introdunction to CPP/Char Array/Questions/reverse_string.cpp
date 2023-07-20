#include <bits/stdc++.h>
using namespace std;

void reversestr(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
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

    int leg = getlength(name);
    reversestr(name, leg);
    cout << name << endl;

    return 0;
}
