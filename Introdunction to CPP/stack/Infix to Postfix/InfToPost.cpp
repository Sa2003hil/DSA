#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
    {
        return 3;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    return -1;
}

string infixToPostfix(string s)
{
    // step 1: create an empty stack and initialize the result string
    stack<int> st;
    string res;

    // step 2: scan the infix expression from left to right
    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        // step 3: if the scanned character is an operand, add it to the result string
        if (c >= 'a' && c < 'z' || c >= 'A' && c <= 'Z' | (c >= '0' && c <= '9'))
        {
            res += c;
        }

        // step 4: if scanned element is an '(' push it to the stack
        if (c == '(')
        {
            st.push(c);
        }

        // step 5: if the scanned element is an ')' pop and output from the stack until an '(' is encountered
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }

        // step 6 : for operators
        else
        {
            // jab tak stack khali nahi hai aur stack ke top ka precedence is greater than the scanned element
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            // push the current element to the stack
            st.push(c);
        }
    }

    // step 7: check karo koi element reh to nhi gya hai---> pop and output from the stack until it is not empty
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    return res; // Return the result string
}

int main(int argc, char const *argv[])
{
    /* code */

    string result = infixToPostfix("(p+q)*(m-n)");
    cout << result << endl;
    return 0;
}
