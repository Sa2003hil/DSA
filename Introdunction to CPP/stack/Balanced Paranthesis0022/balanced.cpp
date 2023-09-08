#include <iostream>
using namespace std;
#define MAX 10

char stack[MAX];
int top = -1;

void push(char data)
{
    // check if the stack is full
    if (top < MAX - 1) // Check for stack overflow
    {
        top++;
        stack[top] = data;
    }
    else
    {
        cout << "Stack overflow! " << endl;
    }
}

char pop()
{
    if (top >= 0)
    {
        char data = stack[top];
        top--;
        return data;
    }
    else
    {
        cout << "Stack underflow!" << endl;
        return '\0'; // Return null character for error
    }
}

bool isvalid(string s)
{
    int n = s.size();
    bool ans = true;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (top >= 0 && stack[top] == '{')
            {
                pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (top >= 0 && stack[top] == '[')
            {
                pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
            if (top >= 0 && stack[top] == '(')
            {
                pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }

    if (top >= 0)
    {
        ans = false; // Unmatched opening brackets
    }

    return ans;
}

int main()
{
    string s = "{([])}";

    if (isvalid(s))
    {
        cout << "Valid String" << endl;
    }
    else
    {
        cout << "Invalid String" << endl;
    }

    return 0;
}
