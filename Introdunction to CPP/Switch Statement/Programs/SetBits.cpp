// Brian_Kernighan_Algorithm

/*

if we subtract a number by 1 and do it bitwise & with itself (n & (n-1)), we unset the rightmost set bit. If we do n & (n-1) in a loop and count the number of times the loop executes, we get the set bit count.
The beauty of this solution is the number of times it loops is equal to the number of set bits in a given integer.

*/

#include <iostream>
using namespace std;

Brian_Kernighan_Algorithm(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << Brian_Kernighan_Algorithm(n) << endl;

    return 0;
}
