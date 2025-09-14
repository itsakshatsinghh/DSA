class Solution {
public:
    int heightChecker(vector<int>& nums) {
        int right=0;
        vector<int> r=nums;
        sort(r.begin(), r.end());
        for(int i =0; i<nums.size();i++){
            if(r[i]!=nums[i]){
                right++;
            }
        }
        return right;
        
    }
};