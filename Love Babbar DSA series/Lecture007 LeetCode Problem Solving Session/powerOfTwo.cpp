#include <limits.h>

/*
Method 1 (BruteForce) : Humne ismein ek loop chala diya 0 se 30 tak aur har iteration mein 2 ki power calculate karke n se compare kar diya

int ans = pow(2,i);

if(ans == n){
    return true;
}

else{
    return false;
}

*/

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        // In this approach we are using the previous value of ans to calculate the next value of ans to make it optimal
        int ans = 1;

        for (int i = 0; i <= 30; i++)
        {

            // checking ans == n
            if (ans == n)
            {
                return true;
            }

            // this is the check for overflow
            if (ans < INT_MAX / 2)
                ans = ans * 2; // 1*2 -> 2*2 -> 4*3 -
        }
        return false;
    }
};
