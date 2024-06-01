#include <bits/stdc++.h>
using namespace std;

// using hashing
int getLongestSubArraySum(vector<int> &a, long long k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        // remaining sum
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) //( present case)
        {
            int leng = i - preSumMap[rem];
            maxLen = max(maxLen, leng);
        }

        // Finally, update the map checking the conditions: (not present case)
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> a = {-1, 1, 1};
    int k = 1;
    int len = getLongestSubArraySum(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
