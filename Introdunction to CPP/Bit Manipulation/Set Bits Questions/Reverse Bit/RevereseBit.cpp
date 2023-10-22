#include <bits/stdc++.h>
using namespace std;
long reverseBits(long n)
{
    // Write your code here.
    long result = 0;
    for (int i = 0; i < 31; i++)
    {
        int lsb = n & 1;
        long reverselsb = (long)lsb << (31 - i); //
        result = result | reverselsb;
        n = n >> 1;
    }

    return result;
}
int main(int argc, char const *argv[])
{
    long n;
    cin >> n;
    cout << reverseBits(n) << endl;

    return 0;
}

/*
Explaination :
    n = 5
    i = 0
    
    n --> 00000000000000000000000000000101
                                       & 1
        ---------------------------------------
                                         1
now we have to left shift this 1 to 31-i position
1 << (31-i) --> 10000000000000000000000000000000

now we have to OR this with result

after this right shift n by 1

i = 1
new n --> 00000000000000000000000000000010
                                       & 1
        ---------------------------------------
                                         0

now we have to left shift this 0 to 31-i position







*/