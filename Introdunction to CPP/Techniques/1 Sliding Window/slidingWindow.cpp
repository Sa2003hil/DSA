#include <iostream>
#include <vector>

using namespace std;

void slidingWindow(const vector<int> &nums, int k)
{
    int left = 0, right = 0;
    int windowSum = 0;

    while (right < nums.size())
    {
        // Expand the window by including the current element
        windowSum += nums[right];

        // Process the current window
        while (right - left + 1 >= k)
        {
            cout << "Window [" << left << ", " << right << "]: " << windowSum << endl;

            // Contract the window by excluding the leftmost element
            windowSum -= nums[left];
            left++;
        }

        // Move the right pointer to expand the window
        right++;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    slidingWindow(nums, k);

    return 0;
}
