
#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>> &matrix, int n, int m, int i)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>> &matrix, int n, int m, int i)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeroMatrix(vector<vector<int>> &martrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (martrix[i][j] == 0)
            {
                markRow(matrix, n, m, i);
                markRow(matrix, n, m, j);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
