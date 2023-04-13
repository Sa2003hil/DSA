#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}

/*   print this pattern
   1 2 3 4
   1 2 3 4
   1 2 3 4
   1 2 3 4    */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i = 1, j, n;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << n - j + 1; // this for reverse and (cout<<j) is for print the pattern in the given order
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

/*   print this pattern
   1 2 3 4
   5 6 7 8
   9 10 11 12 */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, j, n;

    cin >> n;
    int count = 1;
    i = 1;
    while (i < n)
    {
        j = 1;
        while (j < n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
