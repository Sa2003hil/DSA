#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];

    // creating a map
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int mx = INT_MIN;
    int mn = INT_MAX;

    // iterating through the map
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    int ans1, ans2;
    for (auto it : mp)
    {
        if (mx < it.second)
        {
            mx = it.second;
            ans1 = it.first; // element with max freq
        }

        if (mn > it.second)
        {
            mn = it.second;
            ans2 = it.first;
        }
    }

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     mx = max(mx, it->second);
    //     mn = min(mn, it->second);
    // }

    cout << "The highest frequency element is: " << ans1 << endl;
    cout << "The lowest frequency element is: " << ans2 << endl;

    return 0;
}
