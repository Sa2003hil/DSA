#include <bits/stdc++.h>
using namespace std;

void printNto1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNto1(i + 1, n);
    cout << i << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    cin >> n;

    printNto1(1, n);
    return 0;
}

/*
Here is the explaination of the above code

printNto1(1, 5)
    printNto1(2, 5)
        printNto1(3, 5)
            printNto1(4, 5)
                printNto1(5, 5)
                    printNto1(6, 5)
                        return
                    print 5
                print 4
            print 3
        print 2
    print 1

*/
