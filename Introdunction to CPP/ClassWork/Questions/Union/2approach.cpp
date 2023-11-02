// Using map we can have duplicate elements but we can't have duplicate keys so we insert all the elements of both the arrays in the map and then we insert all the keys of map in the vector and return the vector.

// Time Compleixty : O( (m+n)log(m+n) ) . Inserting an element in a map takes logN time, where N is no of elements in the map. At max map can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across inserting all elements in worst, it would take O((m+n)log(m+n) time.

// Space Complexity : O(m+n) . Map can store at max m+n elements {when there are no common elements and elements in arr,arr2 are distntict}.

#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    map<int, int> mp;
    vector<int> Union;

    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        mp[arr2[i]]++;
    }

    for (auto &i : mp)
    {
        Union.push_back(i.first);
    }
    return Union;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";

    return 0;
}
