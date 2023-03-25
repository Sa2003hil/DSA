#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the number here: " << endl;
    cin >> n;

    int sum = 0, i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "The sum is : " << sum << endl;
    return 0;
}
