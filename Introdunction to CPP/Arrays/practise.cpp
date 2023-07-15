#include <iostream>
using namespace std;

void printarr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[])
{

    int arr[14] = {1, 2};

    printarr(arr, 14);

    int secarr[12];

    int size = sizeof(secarr) / sizeof(int);

    cout << size << endl;

    // Character Array

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << endl;
    }
    return 0;
}
