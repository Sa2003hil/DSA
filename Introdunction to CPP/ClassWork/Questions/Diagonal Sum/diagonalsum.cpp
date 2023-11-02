#include <bits/stdc++.h>
using namespace std;

int FirstdiagonalSum(vector<vector<int>> &arr)
{
    int nRows = arr.size();
    int mCols = arr[0].size();

    int sum = 0, j = 0;
    for (int i = 0; i < nRows; i++)
    {
        sum += arr[i][j];
        j++;
    }
    return sum;
}

int SecDiagonalSum(vector<vector<int>> &arr)
{
    int nRows = arr.size();
    int mCols = arr[0].size();

    int sum2 = 0, j = mCols - 1;
    for (int i = 0; i < nRows; i++)
    {
        sum2 += arr[i][j];
        j--;
    }

    return sum2;
}

int main(int argc, char const *argv[])
{
    int nRows, mCols;
    cin >> nRows >> mCols;

    vector<vector<int>> arr(nRows, vector<int>(mCols));
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << FirstdiagonalSum(arr) << endl;
    cout << SecDiagonalSum(arr) << endl;

    return 0;
}
