#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {
    {'[', -1},
    {'{', -2},
    {'(', -3},
    {']', 1},
    {'}', 2},
    {')', 3}

};

string isBalanced(string str)
{
    stack<char> st;

    for (char bracket : str)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
            {
                return "No";
            }
            char top = st.top();
            st.pop();

            if (symbols[top] + symbols[bracket] != 0)
            {
                return "No";
            }
        }
    }
    if (st.empty())
        return "YES";
    return "NO";
}
int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

// #include <iostream>
// using namespace std;

// const int MOD = 1e+7;

// int fibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     return (fibonacci(n - 1) % MOD + fibonacci(n - 2) % MOD) % MOD;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
//     return 0;
// }