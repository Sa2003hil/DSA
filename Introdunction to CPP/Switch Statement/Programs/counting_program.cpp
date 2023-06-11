#include <iostream>
using namespace std;

// Function Body
void counting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    // Function Call
    counting(n);

    return 0;
}
