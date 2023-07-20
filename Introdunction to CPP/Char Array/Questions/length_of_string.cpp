#include <bits/stdc++.h>
using namespace std;

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

    int cnt = 0;
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     cnt++;
    // }
    getlength(name);

    cout << "Length = " << getlength(name) << endl;
    return 0;
}
