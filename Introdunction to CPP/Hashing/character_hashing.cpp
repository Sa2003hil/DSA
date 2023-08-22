#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;

    // pre compute

    int hash[26] = {0};
    /*
    Remember:

    Hash always needs a int value in its brackets hash[int value] --> if we write hash[s[i]] --> it will automatically typecast it to ASCII value

    */

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    /*

    1. for LowerCase : ch - 'a'
    2. for UpperCase : ch - 'A'
    3. for AllCharacters : hash array is of size 256 read the full explanation below:


    If the string contains both uppercase and lowercase letters:
     We have 256 characters in total in this case. So, we will create a hash array of size 256. We will not subtract anything from the given character and will use the character as it is, to access the hash array while pre-storing and fetching. For pre-storing hash[s[i]] += 1 and for fetching we will use hash[character] only. The rest of the process will be exactly the same as in the number hashing.

    */

    // fetch the values for q queries
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;

        // fetch
        cout << hash[c - 'a'] << endl;

        // For example, if the given character is ‘f’, we will get the value as (‘f’ – ‘a’) = (102-97) = 5.
    }

    return 0;
}

