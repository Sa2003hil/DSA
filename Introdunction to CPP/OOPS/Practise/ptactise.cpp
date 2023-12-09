// #include <iostream>
// using namespace std;

// // Function to multiply two matrices.
// #define N 3
// void multiply(int arr1[][N], int arr2[][N], int arr3[][N])
// {
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             arr3[i][j] = 0;
//             for (int k = 0; k < N; k++)
//             {
//                 arr3[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }
// }

// int main()
// {
//     // int N=3;
//     cout << "Enter the dimension of matrix:" << endl;
//     // cin>>N;

//     int arr1[N][N] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}};

//     int arr2[N][N] = {
//         {1, 4, 7},
//         {2, 5, 8},
//         {3, 6, 9}};

//     int arr3[N][N];
//     multiply(arr1, arr2, arr3);

//     cout << "Multiplication of 2 matrix:" << endl;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << arr3[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int N = 3;
//     int arr1[N][N];
//     int arr2[N][N];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr1[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr2[i][j];
//         }
//     }

//     cout << " traspose of the matrix" << endl;
//     // traspose of the matrix
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << arr2[j][i] << " ";
//         }
//         cout << endl;
//     }

//     // matrix multiplication

//     int arr3[N][N];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             arr3[i][j] = 0;
//             for (int k = 0; k < N; k++)
//             {
//                 arr3[i][j] += arr1[i][k] * arr2[k][j];
//             }
//         }
//     }

//     cout << "matrix multiplication" << endl;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << arr3[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     string str;
//     // cin >> str;
//     getline(cin, str);

//     int n = str.length();
//     int space = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == ' ') // Use single quotes for character literals
//         {
//             space++;
//         }
//     }
//     if (str.empty())
//     {
//         space = 0;
//         cout << space << endl;
//     }
//     else
//     {
//         cout << space + 1 << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int countSegments(const string &s)
// {
//     int count = 0;
//     bool inSegment = false;

//     for (char ch : s)
//     {
//         if (ch != ' ')
//         {
//             if (!inSegment)
//             {
//                 count++;
//                 inSegment = true;
//             }
//         }
//         else
//         {
//             inSegment = false;
//         }
//     }
//     return count;
// }

// int main(int argc, char const *argv[])
// {
//     /* code */

//     string str;
//     getline(cin, str);

//     int segments = countSegments(str);

//     cout << segments << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int checkCondition(const string &str)
// {
//     int lateCount = 0, absentCount = 0, presentCount = 0;
//     for (char ch : str)
//     {
//         if (ch == 'A')
//         {
//             absentCount++;
//             lateCount = 0;
//         }
//         else if (ch == 'L')
//         {
//             lateCount++;
//         }
//         else
//         {
//             lateCount = 0;
//         }

//         if (lateCount >= 3 || absentCount >= 2)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     string str;
//     getline(cin, str);

//     // cout << checkCondition(str) << endl;
//     if (checkCondition(str))
//     {
//         cout << "True" << endl;
//     }
//     else
//     {
//         cout << "False" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int checkForCond(const string &str)
// {
//     int present = 0, late = 0, absent = 0;
//     bool award = false;
//     for (char ch : str)
//     {
//         if (ch == 'A')
//         {
//             absent++;
//         }
//         else if (ch == 'L')
//         {
//             late++;
//         }
//         else if (ch == 'P')
//         {
//             present++;
//         }
//     }

//     // checking for consecutive Lates 'L'
//     bool isConsecutive = false;
//     int consecutiveCount = 0;

//     for (int i = 0; i < str.length(); i++)
//     {
//         if (str[i] == 'L')
//         {
//             consecutiveCount++;
//             if (consecutiveCount >= 3)
//             {
//                 isConsecutive = true;
//                 break;
//             }
//         }
//         else
//         {
//             consecutiveCount = 0;
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     string str;
//     getline(cin, str);

//     if (checkForCond(str))
//     {
//         cout << "YEs" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> finalPrices(vector<int> &prices)
// {
//     int n = prices.size();

//     // for (int i = 0; i < n; i++)
//     // {
//     //     int discount = 0;
//     //     for (int j = i + 1; j < n; j++)
//     //     {
//     //         if (prices[j] <= prices[i])
//     //         {
//     //             discount = prices[j];
//     //             break;
//     //         }
//     //     }
//     //     prices[i] -= discount;
//     // }

//     for (int i = 0; i < n; i++)
//     {
//         int discount = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (prices[j] <= prices[i])
//             {
//                 discount = prices[j];
//                 break;
//             }
//         }
//         prices[i] -= discount;
//     }

//     return prices;
// }

// int main()
// {
//     vector<int> prices = {5, 5, 5, 5, 5};

//     vector<int> result = finalPrices(prices);
//     for (int i = 0; i < result.size(); i++)
//     {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    string str1, str2;

    cin >> str1;
    cin >> str2;

    int first = stoi(str1);
    int sec = stoi(str2);

    int result = first * sec;

    cout << result << endl;

    return 0;
}
