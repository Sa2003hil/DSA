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

#include <bits/stdc++.h>
using namespace std;

void WavePrint(vector<vector<int>> &arr)
{
    int nRows = arr.size();
    int mCols = arr[0].size(); // this is how we get the number of columns

    for (int col = 0; col < mCols; col++)
    {
        if (col & 1)
        {
            for (int row = nRows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < nRows; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    int nRows, mCols;
    cin >> nRows >> mCols;

    vector<vector<int>> arr(nRows, vector<int>(mCols));

    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    WavePrint(arr);

    return 0;
}