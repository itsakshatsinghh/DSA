class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> ans(nums.size(),0);

        int negInd=1 , posInd=0;
        for(int i =0 ; i<nums.size();i++){
            if(nums[i]<0){
                ans[negInd]=nums[i];
                negInd=negInd+2;
            }
            else{
                ans[posInd]=nums[i];
                posInd=posInd+2;
            }
        }
        return ans;
        
    }
};