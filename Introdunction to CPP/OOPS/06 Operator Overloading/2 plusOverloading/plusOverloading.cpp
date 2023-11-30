#include <bits/stdc++.h>
using namespace std;

class demo
{
    int a;

public:
    void getdata()
    {
        cout << "Enter a number : ";
        cin >> a;
    }
    void showdata()
    {
        cout << "The sum is : " << a << endl;
    }

    demo operator+(demo bb)
    {
        demo cc;
        cc.a = a + bb.a;
        return cc;
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    demo aa, bb, cc;
    aa.getdata();
    bb.getdata();
    cc = aa + bb;
    cc.showdata();
    return 0;
}
