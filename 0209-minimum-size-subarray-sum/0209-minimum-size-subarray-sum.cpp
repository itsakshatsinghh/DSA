class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, currsum=0;
        int minlen=INT_MAX;
        
        for(int right=0; right<nums.size();right++){
            currsum=currsum+nums[right];
            while(currsum>=target){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                }
                currsum=currsum-nums[left];
                left++;
            }
        }
        return minlen != INT_MAX ? minlen:0;
        
    }
};