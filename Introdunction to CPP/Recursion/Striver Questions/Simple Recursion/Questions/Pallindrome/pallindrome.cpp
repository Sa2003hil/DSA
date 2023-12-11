#include <iostream>
using namespace std;

// Using a single pointer with recursion
bool isPalindrome(int i, string &str)
{
    int n = str.length() - 1;

    // Base case: if the pointer reaches the middle of the string
    if (i >= n / 2)
        return true;

    // Check if the characters at the current positions are equal
    if (str[i] != str[n - i])
        return false;

    // Move to the next pair of characters
    return isPalindrome(i + 1, str);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    if (isPalindrome(0, str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

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