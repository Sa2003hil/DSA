// Approach 1 : Using Set and Vector ,in set we can't have duplicate elements so we firstly insert all the elements of both the arrays in the set and then we insert all the elements of set in the vector and return the vector.

// Time Compleixty : O( (m+n)log(m+n) ) . Inserting an element in a set takes logN time, where N is no of elements in the set. At max set can store m+n elements {when there are no common elements and elements in arr,arr2 are distntict}. So Inserting m+n th element takes log(m+n) time. Upon approximation across inserting all elements in worst, it would take O((m+n)log(m+n) time.

// Space Complexity : O(m+n) . Set can store at max m+n elements {when there are no common elements and elements in arr,arr2 are distntict}.

#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int> Union;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }

    for (auto &i : s)
    {
        Union.push_back(i);
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
