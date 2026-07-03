class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l , r , p , ans;
        l = r = 0; p = 1 ; ans = 0;
        if (k<=1){
            return 0;
        }
        while(r<nums.size()){
            p = p*nums[r];
            while(p>=k){
                p = p/nums[l++];
            }
            ans = ans + (r-l+1);
            r++;
        }
        return ans;
    }
};