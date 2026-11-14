class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans = INT_MAX;
        int n = nums.size();

        // Check every valid window size from l to r
        for (int windowSize = l; windowSize <= r; ++windowSize) {
            // Calculate sum of the initial window
            int currentSum = accumulate(nums.begin(), nums.begin() + windowSize, 0);
            if (currentSum > 0) {
                ans = min(ans, currentSum);
            }

            // Slide the window across the rest of the array
            for (int i = windowSize; i < n; ++i) {
                currentSum += nums[i] - nums[i - windowSize];
                if (currentSum > 0) {
                    ans = min(ans, currentSum);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};