// Time Complexity: O(2^N) { This problem involves two function calls for each iteration which further expands to 4 function calls and so on which makes worst-case time complexity to be exponential in nature }.

// Space Complexity: O(N) { At maximum there could be N function calls waiting in the recursion stack since we need to calculate the Nth Fibonacci number for which we also need to calculate (N-1) Fibonacci numbers before it }.

#include <bits/stdc++.h>
using namespace std;

int findfibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return findfibo(n - 1) + findfibo(n - 2);
    }
}

vector<int> generateFibonacciNumbers(int n)
{
    vector<int> findseq;
    for (int i = 0; i < n; i++)
    {
        findseq.push_back(findfibo(i));
    }
    return findseq;
}

/*
 this is using recursion (multiple recursion) : But this gives TLE error for this approach. For example, if you want to calculate findfibo(5), the algorithm will calculate findfibo(4) and findfibo(3). When calculating findfibo(4), it will again calculate findfibo(3) and findfibo(2), and so on. This leads to an exponential number of function calls and redundant calculations, which can result in a significant performance overhead, especially for large values of n.because they repeatedly recalculate the same values multiple times.

 recursive tree :-

                                    findfibo(5)
                                    /         \
                                findfibo(4)     findfibo(3)
                                /       \        /      \
                            findfibo(3) findfibo(2) findfibo(2) findfibo(1)
                            /      \
                        findfibo(2) findfibo(1)


-----------------------------------------------------
Code:

    if (n <= 1)
        return n;
    int last = findfibo(n - 1);
    int slast = findfibo(n - 2);
    return last + slast;


Method 2: Check if n is a fibonnaci or not

bool isPerfectSquare(int n)
{
    int s = sqrt(n);
    return s * s == n;
}

bool isFibonnaci(int n)
{
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

*/
