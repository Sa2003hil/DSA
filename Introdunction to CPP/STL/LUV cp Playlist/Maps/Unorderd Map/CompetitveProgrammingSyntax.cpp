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

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t; // test cases
	while (t--)
	{
		ll n, k, ans = 0;

		string m, w, a, b;
		cin >> m >> w; // input

		if (m.length() > w.length())
		{ // to select the longer string
			n = m.length();
			a = m;
			b = w;
		}
		else
		{
			n = w.length();
			a = w;
			b = m;
		}

		if (m.length() == w.length())
		{ // edge case
			if (m == w)
				ans = 1; // equal strings are subsequences of each other
		}
		else
		{
			int j = 0; // two pointer approach
			for (int i = 0; i < n; i++)
			{ // traverse to the longer string and check for the other string elements
				if (a[i] == b[j])
					j++;

				if (j == b.length())
				{ // the other string is completely found
					ans = 1;
					break;
				}
			}
		}

		if (ans)
			YES // output
				else NO
	}

	return 0;
}