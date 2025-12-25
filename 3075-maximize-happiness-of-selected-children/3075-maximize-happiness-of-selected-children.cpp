class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        sort(nums.rbegin() , nums.rend());
        int n=nums.size()-1;
        long long maxhap=0;
        for(int i=0;i<k ; i++){
            int val=nums[i]-i;
            if(val>0){
                maxhap=maxhap+val;
            }
        }
        return maxhap;
        
    }
};