#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str;
    getline(cin, str);

    int freq[256] = {0};

    for (char ch : str)
    {
        freq[ch]++;
    }

    unordered_map<char, vector<int>> freqMap;

    // iterate through each character
    for (char ch : str)
    {
        freqMap[ch].push_back(freq[ch]);
    }

    // now print the freqMap
    for (const auto &entry : freqMap)
    {
        char ch = entry.first;
        const vector<int> &freqVector = entry.second;

        cout << "Charaters:" << ch << " Freq:";
        for (int freq : freqVector)
        {
            cout << freq << " ";
        }
        cout << endl;
    }
    return 0;
}
