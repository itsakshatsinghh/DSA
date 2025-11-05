class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        // int mx=nums[nums.size()-1] , mn=nums[0];
        for(int i=0;i<nums.size()-1;i++){
            //check case , if present or not , if not then push
            int curnum=nums[i];
            int nextnum=nums[i+1];
            if(nextnum>curnum+1){
                for(int j=curnum+1;j<nextnum;j++){
                ans.push_back(j);

                }
            }

        }
        return ans;


        
    }
};