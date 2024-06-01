#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &a, int n, int k)
{
    int start = 0, end = n - 1;
    vector<int> ans;
    while (start < end)
    {
        if (a[start] + a[end] == k)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if (a[start] + a[end] < k)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> result = twoSum(a, n, k);
    if (!result.empty())
    {
        cout << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "No solution found" << endl;
    }

    return 0;
}
