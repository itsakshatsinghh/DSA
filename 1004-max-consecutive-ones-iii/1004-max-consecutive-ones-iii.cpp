class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0 , zc = 0 , mxml = 0 ;
        for(int r = 0 ; r<nums.size() ; r++){
            if(nums[r]==0){
                zc++;
            }while(zc>k){
                if(nums[l]==0){
                    zc--;
                }
                l++;
            }
            mxml = max(mxml , r-l+1);
        }
        return mxml;
    }
};