#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{

    vector<vector<int>> ans;
    // Write your code here.
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {

            for (int m = j + 1; m < arr.size(); m++)
            {
                if (arr[i] + arr[j] + arr[m] == s)
                {
                    vector<int> temp;
                    temp.push_back(min(arr[i], arr[j], arr[m]));
                    temp.push_back(max(arr[i], arr[j], arr[m]));
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}