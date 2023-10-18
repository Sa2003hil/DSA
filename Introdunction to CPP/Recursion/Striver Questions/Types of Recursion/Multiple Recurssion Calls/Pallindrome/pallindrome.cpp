#include <iostream>
using namespace std;
// using single pointer
bool isPallindrome(int i, string &str)
{
    int n = str.length() - 1;
    if (i >= n / 2)
        return true;
    if (str[i] != str[n - i - 1])
        return false;

    isPallindrome(i + 1, str);
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;

    cout << isPallindrome(str, 0);
    return 0;
}

/*
Using Functional Recursion

bool palindrome(int i, string &s)
{
    // Base Condition
    // If i exceeds half of the string means all the elements
    // are compared, we return true.
    if (i >= s.length() / 2)
        return true;

    // If the start is not equal to the end, not the palindrome.
    if (s[i] != s[s.length() - i - 1])
        return false;

    // If both characters are the same, increment i and check start+1 and end-1.
    return palindrome(i + 1, s);
}

int main()
{

    // Example string.
    string s = "madam";
    cout << palindrome(0, s);
    cout << endl;
    return 0;
}

*/