class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end());
        long l = 0 , ans = 1 , n = nums.size() , sum = 0 ;

        for(int r = 0 ; r<n ; r++ ){
            sum += nums[r];
            while((r-l+1)*nums[r] - sum > k){
                sum -= nums[l++];
            }
            ans = max(ans , r-l+1);
        }
        return ans;
    }
};