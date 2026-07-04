class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l = 0 , usedbits = 0 , ans = 0;
        for(int r = 0 ; r<nums.size() ; r++){
            while((usedbits & nums[r] )!=0){
                usedbits ^= nums[l++];
            }
            usedbits |= nums[r];
            ans = max(ans , r-l+1);
        }
        return ans;
    }
};