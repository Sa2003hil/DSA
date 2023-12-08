#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isMissing = false;
    int ans = 0, ans2 = 0;

    // this is for missing element in the array
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i + 1)
        {
            ans = i + 1;
            break; // Exit the loop once the missing number is found
        }
    }

    // this is for repeating element in the array
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            ans2 = i;
        }
    }

    cout << ans << " " << ans2 << endl;

    return 0;
}