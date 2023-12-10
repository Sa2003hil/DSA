// #include <bits/stdc++.h>
// using namespace std;
// class Solution
// {
// public:
//     string longestCommonPrefix(vector<string> &strs)
//     {

//     }
// };

// int main(int argc, char const *argv[])
// {
//     vector<string> input = {"flower", "flow", "flight"};

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> mystr;

    const int size = 3;
    string words[size] = {"flower", "flow", "flight"};

    // Sorting the array of words
    sort(words, words + size);

    // now check for first and last common prefixes
    string firstWord = words[0];
    string secWord = words[size - 1];

    int minLeng = min(firstWord.length(), secWord.length());
    int minLengCount = 0;

    for (int i = 0; i < minLeng; i++)
    {
        if (firstWord[i] == secWord[i])
        {
            minLengCount++;
        }
        else
        {
            break;
        }
    }

    // find the commong prefix

    string commonPrefix = firstWord.substr(0, minLengCount);

    cout << commonPrefix << endl;

    return 0;
}
