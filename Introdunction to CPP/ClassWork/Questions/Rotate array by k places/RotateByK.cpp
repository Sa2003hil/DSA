//-----------------------SJ-------------------

#include <bits/stdc++.h>
using namespace std;

// define
#define ll long long
#define pb push_back
#define all  \
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

#define cinarr(arr, n)         \
  for (auto i = 0; i < n; i++) \
    cin >> arr[i];
#define cinvec(v, n)           \
  for (auto i = 0; i < n; i++) \
  {                            \
    int temp;                  \
    cin >> temp;               \
    v.pb(temp);                \
  }
#define cinarrwdsum(arr, n, sum) \
  for (auto i = 0; i < n; i++)   \
  {                              \
    cin >> arr[i];               \
    sum += arr[i];               \
  }

#define print(v)      \
  for (auto i : v)    \
    cout << i << " "; \
  cout << "\n";
// # define itrover({x})  for (auto n : {x}) cout << n << " "; cout << endl;

#define sorta(arr, n) sort(arr, arr + n)
#define sortd(arr, n) sort(arr, arr + n, greater<int>())
#define sortva(v) sort(v.begin(), v.end());
#define sortvd(v) sort(v.begin(), v.end(), greater<int>());
// # define setbitsof(x) __builtin_popcountll(x);
#define cntsetbits(x, cntx) \
  while (x != 0)            \
  {                         \
    x = (x & (x - 1));      \
    cntx++;                 \
  }
#define maxin(arr, n) *max_element(arr, arr + n)

//--------------------------------------------
void reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void RightRotate(int arr[], int n, int d)
{
  reverse(arr, 0, n - d - 1);
  reverse(arr, n - d, n - 1);
  reverse(arr, 0, n - 1);
}

int LeftRotate(int arr[], int n, int d)
{
  reverse(arr, arr + d);
  reverse(arr + d, arr + n);
  reverse(arr, arr + n);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // Happy Coding :)
  int n, d;
  cin >> n >> d;

  int arr[n];
  cinarr(arr, n);

  //  Enter 1 for Left Rotate Enter 2 for Right Rotate
  int no;
  cin >> no;

  switch (no)
  {
  case 1:
    LeftRotate(arr, n, d);
    printArr(arr, n);
    break;

  case 2:
    RightRotate(arr, n, d);
    printArr(arr, n);
    break;

  default:
    cout << "Invalid Choise" << endl;
    break;
  }

  return 0;
}