#include <bits/stdc++.h>
using namespace std;

/*
^ Brute Force Approach
Genrate all the subarrays using 3 nested loops
TC - O(n^3) ~ nearly not exactly

remove 3rd loop and calculate the sum using two loops
TC - O(n^2)

^ Better Approach
* 1. HASHING


int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        !  calculate the prefix sum till index i:
        sum += a[i];

        ! if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        ! calculate the sum of remaining part i.e. x-k:
        long long rem = sum - k;

        ! Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        ! Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

Time Complexity: O(N)--UnorderedMap or O(N*logN)--> OrderedMap depending on which map data structure we are using, where N = size of the array.

Reason: For example, if we are using an unordered_map data structure in C++ the time complexity will be O(N)(though in the worst case, unordered_map takes O(N) to find an element and the time complexity becomes O(N2)) but if we are using a map data structure, the time complexity will be O(N*logN). The least complexity will be O(N) as we are using a loop to traverse the array.

Space Complexity: O(N) as we are using a map data structure.


^ Optimal Approach


*/

int main(int argc, char const *argv[])
{

    /* code */

    return 0;
}
