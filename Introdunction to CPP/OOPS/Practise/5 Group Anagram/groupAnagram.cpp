#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        // create an unordered map for storing sorted string part
        unordered_map<string, vector<string>> mp;

        for (auto x : strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }

        // for storing the result
        vector<vector<string>> ans;
        for (auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};

int main()
{
    Solution solution;

    // Example usage
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = solution.groupAnagrams(input);

    // Display the result
    for (const auto &group : result)
    {
        cout << "[";
        for (const string &str : group)
        {
            cout << str << " ";
        }
        cout << "]";
    }

    return 0;
}
