#include <bits/stdc++.h>
using namespace std;

int romanToInt(const string &str)
{
    // created unordered map for storing the values of the predefined romalValues
    unordered_map<char, int> romanValue = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (romanValue[str[i]] < romanValue[str[i + 1]])
        {
            // result = romanValue[str[i + 1]] - romanValue[str[i]];
            result -= romanValue[str[i]];
        }
        else
        {
            // result = romanValue[str[i + 1]] + romanValue[str[i]];
            result += romanValue[str[i]];
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
    /* code */
    string romanValue;
    cin >> romanValue;

    int result = romanToInt(romanValue);
    cout << result << endl;
    return 0;
}
