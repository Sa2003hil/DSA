#include <iostream>
using namespace std;

// Optimised Approach
int findUnique(int *arr, int size)
{

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

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

/*

optmised approach:-
In this approach if we are doindg XOR operation

a ^ a = 0  (if we do XOR with same elements then its reult is 0)

a ^ 0 = a

int findUnique(int *arr, int size)
{

    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

*/