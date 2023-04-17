class Solution
{
public:
    int reverse(int x)
    {
        int rem = 0, rev = 0;
        while (x != 0)
        {
            rem = rem % 10;
            rev = (rev * 10) + rem;
            x /= 10;
        }

        return rev;
    }
};