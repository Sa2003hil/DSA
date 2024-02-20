//-----------------------SJ-------------------

#include <bits/stdc++.h>
using namespace std;

// define
#define ll long long
#define pb push_back
#define all    \
    int i = 0; \
    i < n;     \
    i++
#define uosint unordered_set<int>
#define uosll unordered_set<ll>
#define umap unordered_map<int, int>

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

#define endl '\n'
#define modulo % (1000000007) // const ll Modulo = 1e9+7;

#define cinarr(arr, n)           \
    for (auto i = 0; i < n; i++) \
        cin >> arr[i];
#define cinvec(v, n)             \
    for (auto i = 0; i < n; i++) \
    {                            \
        int temp;                \
        cin >> temp;             \
        v.pb(temp);              \
    }
#define cinarrwdsum(arr, n, sum) \
    for (auto i = 0; i < n; i++) \
    {                            \
        cin >> arr[i];           \
        sum += arr[i];           \
    }

#define print(v)          \
    for (auto i : v)      \
        cout << i << " "; \
    cout << "\n";
// # define itrover({x})  for (auto n : {x}) cout << n << " "; cout << endl;

#define sorta(arr, n) sort(arr, arr + n)
#define sortd(arr, n) sort(arr, arr + n, greater<int>())
#define sortva(v) sort(v.begin(), v.end());
#define sortvd(v) sort(v.begin(), v.end(), greater<int>());
// # define setbitsof(x) __builtin_popcountll(x);
#define cntsetbits(x, cntx)    \
    while (x != 0)             \
        \ 
                                                                \
        {                      \
            x = (x & (x - 1)); \
            cntx++;            \
        }
#define maxin(arr, n) *max_element(arr, arr + n)

//--------------------------------------------
const int N = 1e5 + 10;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << INT_MAX << endl;
    int n = 16;

    bool res = (1 << 4) == n;

    cout << res << endl;

    int a = (1LL << 31) - 1;
    cout << a << endl;

    return 0;
}