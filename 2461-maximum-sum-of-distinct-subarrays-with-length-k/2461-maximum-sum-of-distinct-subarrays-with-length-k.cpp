class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int left = 0, n = nums.size();
        long long sum = 0, maxSum = 0;

        for (int right = 0; right < n; right++) {
            // Add the current element to the window
            sum += nums[right];
            count[nums[right]]++;

            // If the window size exceeds k, shrink it from the left
            if (right - left + 1 > k) {
                sum -= nums[left];
                count[nums[left]]--;
                if (count[nums[left]] == 0) {
                    count.erase(nums[left]);
                }
                left++;
            }

            // If the window is exactly size k and contains k distinct elements
            if (right - left + 1 == k && count.size() == k) {
                maxSum = max(maxSum, sum);
            }
        }     
        return maxSum;
    }
};