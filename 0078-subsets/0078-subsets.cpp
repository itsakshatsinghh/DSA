class Solution {
public:

void getallsubs(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allsubs){
    if(i==nums.size()){
        allsubs.push_back({ans});
        return ;
    }
    //inclusion
    ans.push_back(nums[i]);
    getallsubs(nums, ans, i+1, allsubs);
    //exclusion
    ans.pop_back();
    getallsubs(nums,ans,i+1, allsubs);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> allsubs;
        vector<int> ans;
        getallsubs(nums, ans, 0, allsubs);

     return allsubs;
    }
};