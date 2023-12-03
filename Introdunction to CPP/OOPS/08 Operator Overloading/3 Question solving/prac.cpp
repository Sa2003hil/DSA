#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int choice;
    cin >> choice;

    int leng, bred;
    float res;
    switch (choice)
    {
    case 1:
        cin >> leng >> bred;
        res = leng * bred;
        cout << res << endl;
        break;

    case 2:
        int radi;
        cin >> radi;
        res = 3.17 * radi * radi;
        cout << res << endl;
    default:
        break;
    }
    return 0;
}
