class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        int MX = INT_MIN;
        for(int i = 0 ; i<n ; i++){
            MX = max(MX , nums[i]);
            ans[i] = gcd(nums[i] , MX);
        }
        sort(ans.begin() , ans.end());
        long long res = 0;
        int l = 0 , r = n-1;
        while(l<r){
            res = res+gcd(ans[l] , ans[r]);
            l++ , r--;
        }

        return res;
        
    }
};