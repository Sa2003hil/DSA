// For Loop

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n here: ";
    cin >> n;

    cout << "The value of i is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }
    return 0;
}

/*You can declare all the 3 conditions outside the for loop. this is also valid*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the value of n here: ";
    cin >> n;

    cout << "The value of i is : " << endl;
    int i = 1;
    for (;;) /* But if we put this stopping condtion outside
                    the loop then it will give an error because it doesn't know that when to stop . solution for this is we have to use break statemnt
                    in the last */
    {

        cout << i << endl;
        i++;
    }
    return 0;
}

// this is the example where we use all the three conditions outside the loop
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i = 1;
    cout << "Enter the value of n here: ";
    cin >> n;

    cout << "The value of i is : " << endl;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }
    return 0;
}
