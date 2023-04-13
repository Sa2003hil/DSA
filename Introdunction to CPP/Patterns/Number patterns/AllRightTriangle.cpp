/* print this pattern

    *
    * *
    * * *
    * * * *
                   */
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
        while (j <= i) // here (n-i+1) is for reverse right triangle pattern
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* print this pattern
    1
    2 2
    3 3 3
    4 4 4 4  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int row, col;

    row = 1;
    while (row <= n)
    {
        col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}

/* print this pattern
    1
    2 3
    3 4 5
    4 5 6 7  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i, j;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

/* print this pattern
    1
    2 1
    3 2 1
    4 3 2 1  */

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int i, j;

    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
