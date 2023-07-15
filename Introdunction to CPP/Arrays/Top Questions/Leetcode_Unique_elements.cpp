#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];

    int freq[n] = {0}; // This approach of finding freq is not optimised
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 1)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
