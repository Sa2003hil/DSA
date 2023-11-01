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
#define cntsetbits(x, cntx) \
    while (x != 0)          \
    {                       \
        x = (x & (x - 1));  \
        cntx++;             \
    }
#define maxin(arr, n) *max_element(arr, arr + n)

//--------------------------------------------

void rotatearray(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    // Happy Coding :)
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    rotatearray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}