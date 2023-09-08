/*
// revise from here :- https://takeuforward.org/hashing/hashing-maps-time-complexity-collisions-division-rule-of-hashing-strivers-a2z-dsa-course/

Time comlexity

1.Map ->
 Storing(i.e. insertion) and fetching(i.e. retrieval) in a C++ map, both take always O(logN) time complexity, where N = the size of the map.

2.unordered_map ->
 unordered_map in C++ and HashMap in Java, both take O(1) time complexity to perform storing(i.e. insertion) and fetching(i.e. retrieval). Now, it is valid for the best case and the average case.

*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];

    /*

    This is the case of ordered map in which elements are stored in the sorted order , if we take   unordered_map<int, int> mpp;  all the this code runs same but the thing changed is order is unsorted

    example :
    5
    1 1 2 1 2

    2->2
    1->3


    ** IMPORTANT **  Note:

    Our first priority will be always to use unordered_map and then map. If unordered_map gives a time limit exceeded error(TLE), we will then use the map.


    */

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterate over the map

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cin >> q;

    while (q--)
    {
        int num;
        cin >> num;

        cout << mpp[num] << endl;
    }

    return 0;
}
