// #include <bits/stdc++.h>
// using namespace std;

// class chknum
// {
// private:
//     float number;

// public:
//     // creating a constructor
//     chknum(float num) : number(num)
//     {
//         checknumber();
//     }

//     void checknumber()
//     {
//         if (number == 0)
//         {
//             cout << number << " is neutral." << endl;
//         }
//         else if (number > 0)
//         {
//             cout << number << " is postive." << endl;
//         }
//         else if (number < 0)
//         {
//             cout << number << " is negative." << endl;
//         }
//     }
// };

// int main(int argc, char const *argv[])
// {
//     /* code */
//     chknum num1(-5.7);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int vowel = 0;
//     string vow = "aeiouAEIOU";
//     string str;
//     getline(cin, str);

//     for (int i = 0; i < str.length(); i++)
//     {
//         for (int v = 0; v <= vow.length(); v++)
//         {
//             if (str[i] == vow[v])
//             {
//                 vowel++;
//                 break;
//             }
//         }
//     }

//     cout << "no. of vowels is :" << vowel << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int row, col;
//     cin >> row;
//     for (int i = 1; i <= row; i++) // rows
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             // print the cols
//             cout << i << " ";
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
//     int row;
//     cin >> row;
//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*"
//                  << " ";
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
//     int row;
//     cin >> row;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < 2 * (row - i) - 1; j++)
//         {
//             cout << (" ");
//         }
//         for (int k = 0; k <= i; k++)
//         {
//             cout << "* ";
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
//     int num;
//     cin >> num;

//     int temp = num, ans = 0;
//     while (temp != 0)
//     {
//         int rem = temp % 10;
//         ans += rem * rem * rem;
//         temp /= 10;
//     }

//     if (ans == num)
//     {
//         cout << num << " is an armstrong numeber" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findfibo(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }
//     else
//     {
//         return (findfibo(n - 1) + findfibo(n - 2));
//     }
// }

// int main(int argc, char const *argv[])
// {

//     /* code */
//     int start, limit;
//     cin >> start >> limit;

//     // cout << findfibo(n) << endl;
//     for (int i = start; i < limit; i++)
//     {
//         cout << findfibo(i) << " ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void printFibonacci(int start, int next, int limit)
// {
//     for (int count = 1; count <= limit; count++)
//     {
//         cout << start << " ";
//         int temp = start;
//         start = next;
//         next = temp + next;
//     }
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int start, limit;

//     cout << "Enter the starting point: ";
//     cin >> start;
//     cout << "Enter the limit: ";
//     cin >> limit;
//     cout << "Fibonacci series starting from " << start << " up to " << limit << " numbers:\n";

//     printFibonacci(start, start + 1, limit);
//     cout << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int checkPrime(int n)
// {
//     bool prime = true;
//     if (n == 0 || n == 1)
//     {
//         prime = false;
//     }

//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 prime = false;
//                 break;
//             }
//         }
//     }
//     return prime;
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int n;
//     cin >> n;

//     if (checkPrime(n))
//     {
//         cout << "Prime Number" << endl;
//     }
//     else
//     {
//         cout << "Not prime " << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// bool checkPallindrome(string str)
// {
//     bool pallin = true;
//     int n = str.length() - 1;
//     int start = 0, end = n;

//     while (start < end)
//     {
//         if (str[start] == str[end])
//         {
//             start++;
//             end--;
//         }
//         else if (str[start] != str[end])
//         {
//             pallin = false;
//             break;
//         }
//     }
//     return pallin;
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     string str;
//     cin >> str;

//     if (checkPallindrome(str))
//     {
//         cout << "Pallindrome" << endl;
//     }
//     else
//     {
//         cout << "Not pallindrome" << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     bool isMissing = false;
//     int ans = 0, ans2 = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[i] != i + 1)
//         {
//             ans = i + 1;
//             break; // Exit the loop once the missing number is found
//         }
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             ans2 = i;
//         }
//     }

//     cout << ans << " " << ans2 << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int findPossWay(int n)
// {
//     if (n == 1)
//         return 1;
//     if (n == 2)
//         return 2;

//     return findPossWay(n - 1) + findPossWay(n - 2);
// }

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int n;
//     cin >> n;

//     cout << findPossWay(n) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     string str;
//     getline(cin, str);

//     int start = 0;
//     // cout << str.length();
//     int end = str.length() - 1;

//     while (start < end)
//     {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;

//         start++;
//         end--;
//     }

//     cout << str << endl;
//     /* code */
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     char ch;
//     cin >> ch;

//     if (ch >= 'a' && ch <= 'z')
//     {
//         cout << "this is a character" << endl;
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // checking valid date
// bool dateCheck(int date)
// {
//     // check for date
//     if (date >= 1 && date <= 31)
//     {
//         return true;
//     }
//     return false;
// }

// // checking valid month
// bool monthCheck(int month)
// {
//     if (month >= 1 && month <= 12)
//     {
//         return true;
//     }
//     return false;
// }

// // check for leap year
// bool checkIsLeapYear(int year, int date)
// {
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//     {
//         if (date > 29)
//         {
//             return false;
//         }
//     }
//     else
//     {
//         if (date > 28)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// // specific month checking having 30 days
// bool checkSpecMonth(int month, int date)
// {
//     if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30)
//     {
//         return false;
//     }
//     return true;
// }

// int main(int argc, char const *argv[])
// {
//     int date, month, year;
//     cin >> date >> month >> year;

//     // checking all conditions to check validation
//     if (dateCheck(date) && monthCheck(month) && checkIsLeapYear(year, date) && checkSpecMonth(month, date))
//     {
//         cout << date << "/" << month << "/" << year << "\n"
//              << "This date is valid." << endl;
//     }
//     else
//     {
//         cout << date << "/" << month << "/" << year << "\n"
//              << "This date is Invalid." << endl;
//     }

//     return 0;
// }
