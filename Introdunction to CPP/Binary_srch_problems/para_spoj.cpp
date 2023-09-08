#include <bits/stdc++.h>
using namespace std;
bool isPossible(int cook[], int n, int prata, int time)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int t = 0;
        int next_time = cook[i];
        while (t + next_time <= time)
        {
            num += 1;
            t += next_time;
            next_time += cook[i];
            if (num >= prata)
                return true;
        }
    }
    return false;
}
long minTimeNeeded(int cook[], int n, int prata)
{
    int s = 0;
    int e = 1e8;
    int mid, ans = -1;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (isPossible(cook, n, prata, mid))
        {
            e = mid - 1;
            ans = mid;
        }
        else
            s = mid + 1;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int prata;
        cin >> prata;
        int cook[51];
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> cook[i];
        sort(cook, cook + n);
        cout << minTimeNeeded(cook, n, prata) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define int long long int
// using namespace std;
// int timetomakenpratha(int r, int n)
// {
//     return (r * n * (n + 1)) / 2;
// }
// bool isValid(vector<int> &arr, int t, int pratha)
// {
//     int p = 0; // let p be total prathas made by all cooks
//     for (int i = 0; i < arr.size(); i++)
//     { // calculating total prathas made by all cooks in time t
//         int r = arr[i];
//         int low = 0, high = pratha; // rank r person can make [0,pratha] prathas in time t
//         while (low <= high)
//         {
//             int mid = (low + high) >> 1;           // let mid prathas possible
//             int timer = timetomakenpratha(r, mid); // time to make mid prathas
//             if (timer > t)                         // not possible to make mid prathas in time t
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         p += high;
//         if (p >= pratha)
//             return true;
//     }
//     return p >= pratha;
// }
// inline void solve()
// {
//     // done by me
//     int pratha;
//     cin >> pratha;
//     int r, ans, high = 0, low = 1; // lowest possible time =1
//     cin >> r;
//     vector<int> arr(r);
//     for (int i = 0; i < r; i++)
//     {
//         cin >> arr[i];
//         high = max(high, arr[i]);
//     }
//     // in this we check whether it is possible to make prathas in 'mid' time by binary search
//     // hence finding out the minimum possible time to make prathas
//     high = timetomakenpratha(high, pratha); // highest possible time if highest ranked person makes all the prathas
//     while (low <= high)
//     {
//         int mid = (low + high) >> 1; // checking if mid time is possible to make prathas
//         if (isValid(arr, mid, pratha))
//         {                   // if mid time is valid then all times greater than mid will be valid
//             high = mid - 1; // hence high=mid-1
//             ans = mid;      // as at last we will get min possible valid time
//         }
//         else // if time mid is not possible check for higher time to make prathas
//             low = mid + 1;
//     }
//     cout << ans << "\n";
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t = 1;
//     cin >> t;
//     while (t-- > 0)
//     {
//         solve();
//     }
//     return 0;
// }