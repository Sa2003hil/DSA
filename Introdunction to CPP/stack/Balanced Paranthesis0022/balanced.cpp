#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {
    {'[', -1},
    {'{', -2},
    {'(', -3},
    {']', 1},
    {'}', 2},
    {')', 3},
};
string isBalanced(string str)
{
    stack<char> st;
    for (char bracket : str)
    {
        // agr symbols[bracket]<0 means ye opening type of bracket hai
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        // in else case it is a closing type of brackets
        else
        {
            if (st.empty())
                return "NO";
            // agar stack kahli nahi hai to pop top element
            char top = st.top();
            st.pop();

            // if the sum of closing and opening brackets from map-->of symbols array is !=0 means it is not valid paranthesis
            if (symbols[top] + symbols[bracket] != 0)
            {
                return "NO";
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
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        cout << isBalanced(str) << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;
// #define MAX 10

// char stack[MAX];
// int top = -1;

// void push(char data)
// {
//     // check if the stack is full
//     if (top < MAX - 1) // Check for stack overflow
//     {
//         top++;
//         stack[top] = data;
//     }
//     else
//     {
//         cout << "Stack overflow! " << endl;
//     }
// }

// char pop()
// {
//     if (top >= 0)
//     {
//         char data = stack[top];
//         top--;
//         return data;
//     }
//     else
//     {
//         cout << "Stack underflow!" << endl;
//         return '\0'; // Return null character for error
//     }
// }

// bool isvalid(string s)
// {
//     int n = s.size();
//     bool ans = true;

//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '{' || s[i] == '[' || s[i] == '(')
//         {
//             push(s[i]);
//         }
//         else if (s[i] == '}')
//         {
//             if (top >= 0 && stack[top] == '{')
//             {
//                 pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         else if (s[i] == ']')
//         {
//             if (top >= 0 && stack[top] == '[')
//             {
//                 pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         else if (s[i] == ')')
//         {
//             if (top >= 0 && stack[top] == '(')
//             {
//                 pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//     }

//     // last mein check kiya ki stack empty ho gya hai ya nahi if nhi means abhi bhi stack mein paranthesis bche huien hai
//     if (top >= 0)
//     {
//         ans = false; // Unmatched opening brackets
//     }

//     return ans;
// }

// int main()
// {
//     string s = "{([])}";

//     if (isvalid(s))
//     {
//         cout << "Valid String" << endl;
//     }
//     else
//     {
//         cout << "Invalid String" << endl;
//     }

//     return 0;
// }
