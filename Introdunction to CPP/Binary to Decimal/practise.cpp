#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, ans = 0, res = 0, c;
    int bit, comp;
    cout << "Enter a negative number to represent in memory as 2's complement  :  ";
    cin >> a;
    c = -a;
    int i = 0, j = 0;
    while (c != 0)
    {
        bit = c & 1;
        comp = bit ^ 1;
        ans = (comp * pow(10, i)) + ans;
        c = c >> 1;
        i = i + 1;
    }
    while (ans != 0)
    {
        int digit = ans % 10;
        res = (digit * pow(2, j)) + res;
        ans = ans / 10;
        j = j + 1;
    }
    ans = 0;
    i = 0;
    int carry = 1;
    while (res != 0 || carry == 1)
    {
        bit = res & 1;
        if (carry <= -1)
        {
            comp = bit;
        }
        else if (bit & carry == 1)
        {
            comp = bit ^ 1;
            carry++;
        }
        else
        {
            comp = bit ^ 1;
            carry--;
        }
        ans = (comp * pow(10, i)) + ans;
        res = res >> 1;
        i++;
        carry--;
    }
    cout << ans;
}