class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        auto max_it = max_element(nums.begin(), nums.end());
        int max=*max_it;
        auto min_it=min_element(nums.begin(), nums.end());
        int min=*min_it;
        // int max=nums[nums.size()-1];
        // int min=nums[0];
        unordered_map<int, int> m;
        //mapping to 0
        for(int i=min;i<=max;i++){
            m[i]=0;
        }
        //updating the freq;
        for(int i :nums){
            m[i]++;
        }
        //checking whose freq = 0;
        for(auto& it : m){
            if(it.second==0){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};