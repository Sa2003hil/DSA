// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int k, n;
//     cin >> k >> n;
//     string a[k], b[n];

//     for (int i = 0; i < k; i++)
//         cin >> a[i]; // TC:- O(n)
//     for (int j = 0; j < n; j++)
//         cin >> b[j]; // TC :- O(n)

//     // now compare all elements of b
//     for (int i = 0; i < n; i++)
//     {
//         int check = 1;
//         // check for each element in the array a
//         for (int j = 0; j < k; j++)
//         {
//             if (b[i].find(a[j]) != -1)
//             {
//                 cout << "Good" << endl;
//             }
//         }
//         if (b[i].length() >= 47)
//         {
//             cout << "Good" << endl;
//         }
//         else
//         {
//             cout << "Bad" << endl;
//         }
//     }

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;

//         // now sort the string first
//         sort(str.begin(), str.end());

//         cout << str << endl;
//         int ans = 0;
//         for (int i = 0; i < str.length(); i++)
//         {
//             ans += ((i + 1) * (str[i] - 96));
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     /* code */
//     string str;
//     cin >> str;

//     set<char> charSet;
//     int count = 0;

//     for (char ch : str)
//     {
//         charSet.insert(ch);
//     }

//     // for (char ch : charSet)
//     // {
//     //     cout << ch << "";
//     // }
//     // cout << endl;
//     cout << charSet.size() << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string A, B;
//         cin >> A >> B;
//         vector<char> str;

//         // Find the minimum length among A and B
//         int minLength = min(A.length(), B.length());

//         for (int i = 0; i < minLength; i++)
//         {
//             str.push_back(A[i] ^ B[i]);
//         }

//         // Print the characters in the vector
//         for (char c : str)
//         {
//             cout << c;
//         }

//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// void slidingWindow(const vector<int>& nums, int k) {
//     int left = 0, right = 0;
//     int windowSum = 0;

//     while (right < nums.size()) {
//         // Expand the window by including the current element
//         windowSum += nums[right];

//         // Process the current window
//         while (right - left + 1 >= k) {
//             cout << "Window [" << left << ", " << right << "]: " << windowSum << endl;

//             // Contract the window by excluding the leftmost element
//             windowSum -= nums[left];
//             left++;
//         }

//         // Move the right pointer to expand the window
//         right++;
//     }
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;

//     slidingWindow(nums, k);

//     return 0;
// }

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(std::string s)
    {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int left = 0;

        // for (int right = 0; right < n; right++)
        // {
        //   // if (charSet.count(s[right]) == 0) {
        //     if (charSet.find(s[right]) == charSet.end())
        //     {
        //         charSet.insert(s[right]);
        //         maxLength = max(maxLength, right - left + 1);
        //     }
        //     else
        //     {
        //         while (charSet.find(s[right]) != charSet.end())
        //         {
        //             charSet.erase(s[left]);
        //             left++;
        //         }
        //         charSet.insert(s[right]);
        //     }
        // }

        for (int right = 0; right < n; right++)
        {
            // check for the current char is present in the charSet or not
            if (charSet.find(s[right]) == charSet.end())
            { // unique
                charSet.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
            }
            else
            {
                // agar repeating charcter mil jaata hai in that case
                // while (charSet.find(s[right]) != charSet.end())
                while (charSet.count(s[right]))
                {
                    charSet.erase(s[left]);
                    left++;
                }
                        }
        }
        return maxLength;
    }
};

int main()
{
    Solution sol;
    string input = "abcabcbb"; // Example input
    int result = sol.lengthOfLongestSubstring(input);
    cout << "Length of the longest substring without repeating characters: " << result << std::endl;
    return 0;
}
