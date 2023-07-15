// Time Complexity:

// 1. Best Case: O(1)
// 2. Average Case: O(log N)
// 3. Worst Case: O(log N)

#include <iostream>
using namespace std;

void inputarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int last = size - 1;

    while (start <= last)
    {
        int mid = start + (last - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right vala part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        // go to left vala part
        else
        {
            last = mid - 1;
        }
    }

    return -1; // Key not found
}

int main()
{
    int size;

    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the array:" << endl;
    inputarray(arr, size);

    int key;
    cout << "Enter the key to be searched:" << endl;
    cin >> key;

    int index = binarysearch(arr, size, key);

    if (index != -1)
    {
        cout << "Element is present at index " << index << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
