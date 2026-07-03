class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0 , winsum = 0 , mnml= INT_MAX;
        for(int r=0 ;r<nums.size() ; r++){
            winsum=winsum+nums[r];
            while(winsum>=target){
                if(r-l+1<mnml){
                    mnml=r-l+1;
                }
                winsum = winsum-nums[l];
                l++;
                
            }
            
        }
        return mnml != INT_MAX ? mnml : 0;
    }
};