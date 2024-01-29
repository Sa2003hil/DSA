#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // Create a vector of pairs (element, index)
        vector<pair<int, int>> numsWithIndices(nums.size());
        for (int i = 0; i < nums.size(); ++i)
        {
            numsWithIndices[i] = {nums[i], i};
        }

        // Sort the vector of pairs based on the elements
        sort(numsWithIndices.begin(), numsWithIndices.end());

        // Use two pointers to find the pair that sums to the target
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int current_sum = numsWithIndices[left].first + numsWithIndices[right].first;

            if (current_sum == target)
            {
                // Return a vector containing the two original indices
                return {numsWithIndices[left].second, numsWithIndices[right].second};
            }
            else if (current_sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        // Return an empty vector if no pair is found
        return {};
    }
};

int main(int argc, char const *argv[])
{
    // Example input
    vector<int> nums = {3, 2, 4};
    int target = 6;

    // Create an instance of the Solution class
    Solution solution;

    // Call the twoSum function
    vector<int> result = solution.twoSum(nums, target);

    // Output the result
    if (result.empty())
    {
        cout << "No pair found." << endl;
    }
    else
    {
        cout << "Indices of the pair: " << result[0] << " " << result[1] << endl;
    }

    return 0;
}

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> originalIndices(nums.size());
        iota(originalIndices.begin(), originalIndices.end(), 0);

        // Sort the array along with the original indices
        sort(originalIndices.begin(), originalIndices.end(),
             [&nums](int a, int b)
             { return nums[a] < nums[b]; });

        vector<pair<int, int>> originalIndices(nums.size());

        for (int i = 0; i < nums.size(); i++)
        {
            originalIndices[i] = {nums[i], i};
        }

        sort(originalIndices.begin(), orignalIndices.end());

        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int current_sum = nums[originalIndices[left]] + nums[originalIndices[right]];

            if (current_sum == target)
            {
                // Return a vector containing the two original indices
                return {originalIndices[left], originalIndices[right]};
            }
            else if (current_sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        // Return an empty vector if no pair is found
        return {};
    }
};