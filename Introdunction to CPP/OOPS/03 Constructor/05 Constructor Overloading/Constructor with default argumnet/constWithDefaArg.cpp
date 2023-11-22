// Constructor with dafault arguments

#include <bits/stdc++.h>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    void printData();
};

void Simple ::printData()
{
    cout << " The value of data1 and data2 is :" << data1 << " and " << data2 << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    // Simple s(1);
    // s.printData();

    Simple s(1, 4);
    s.printData();

    return 0;
}
