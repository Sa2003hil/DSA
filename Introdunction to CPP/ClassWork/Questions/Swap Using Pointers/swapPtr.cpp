#include <bits/stdc++.h>
using namespace std;

void swapElements(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index1, index2;

    cout << "Enter the indices of the elements you want to swap: ";
    cin >> index1 >> index2;

    if (index1 >= 0 && index1 < n && index2 >= 0 && index2 < n)
    {
        swapElements(&arr[index1], &arr[index2]);

        cout << "Array after swapping elements:" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Invalid indices. Please enter valid indices within the array size." << endl;
    }

    return 0;
}
