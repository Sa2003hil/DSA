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
        // agr symbols[bracket < 0] means ye opening type of bracket hai
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
