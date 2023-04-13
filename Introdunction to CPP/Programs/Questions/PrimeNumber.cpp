#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number here: ";

    cin >> num;

    bool isprime = 1;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }

    if (isprime == 1)
    {
        cout << "This is prime number." << endl;
    }
    else
    {
        cout << "This is not a prime number." << endl;
    }
    return 0;
}
