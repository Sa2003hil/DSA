#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{

    string str;
    cin >> str;

    int maxCount = 0, currentCount = 0;

    for (char ch : str)
    {
        if (ch == '1')
        {
            currentCount++;
        }
        else
        {
            maxCount = max(maxCount, currentCount);
            currentCount = 0;
        }
    }

    // now case when string ends with 1(when all the string is of consecutive 1's)
    maxCount = max(maxCount, currentCount);

    cout << maxCount << endl;
    /* code */
    return 0;
}
