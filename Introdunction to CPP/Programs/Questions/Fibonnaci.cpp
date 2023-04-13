#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the numbere here upto which you want fibonnacci : ";
    cin >> num;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    int nextnum = 0;
    for (int i = 1; i <= num; i++)
    {
        nextnum = a + b;
        cout << nextnum << " ";
        a = b;
        b = nextnum;
    }

    return 0;
}
