class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n-k+1 ,-1);
        int seen = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(i && nums[i-1]+1 == nums[i]){
                seen++;
            }else{seen= 0;}
                
            if(seen>=k-1){
                ans[i-k+1] = nums[i];
            }
        }
        return ans;
    }
};