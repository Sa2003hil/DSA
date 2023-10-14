#include <iostream>
using namespace std;

int count = 0;

void print()
{
    if (count <= 10) // this is the base case
    {
        cout << count << endl;
        count++;
        print();
    }
}

int main()
{
    print();
    return 0;
}
