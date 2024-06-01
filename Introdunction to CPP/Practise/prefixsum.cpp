#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
int prefixSum[N];

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        long long sum = 0;

        cout << prefixSum[r] - prefixSum[l - 1] << endl;
    }
    return 0;
}
