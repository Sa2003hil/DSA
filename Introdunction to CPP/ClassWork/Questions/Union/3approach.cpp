// Two pointer approach , in this approach we will use two pointers i and j to traverse the array and compare the elements of both the arrays and push back the elements in the union array if they are not equal to the last element of the union array. This approach is used when the arrays are sorted.if the array is not sorted then we can sort the array and then use this approach.

#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;  // pointers
    vector<int> Union; // Uninon vector
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n) // IF any element left in arr1 then push back in the array
    {
        if (Union.back() != arr1[i])
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()

{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}
