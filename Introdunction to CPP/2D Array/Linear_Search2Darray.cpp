#include <bits/stdc++.h>
using namespace std;

bool ispresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; row++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int arr[3][4];
    // int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the Target element here: " << endl;
    cin >> target;

    if (ispresent(arr, target, 3, 4))
    {
        cout << "Elemenet is found";
    }
    else
    {
        cout << "Element is not found";
    }

    return 0;
}
