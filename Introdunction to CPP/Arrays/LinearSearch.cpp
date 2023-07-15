// Linear Search Algorithm

#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    bool found = LinearSearch(arr, n, key);

    if (found)
    {
        cout << "The key is present" << endl;
    }
    else
    {
        cout << "The key is not present" << endl;
    }

    return 0;
}
