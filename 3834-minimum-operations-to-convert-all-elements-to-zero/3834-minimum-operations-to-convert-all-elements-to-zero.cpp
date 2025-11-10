class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int> v;
        int ans=0;
        for(int n: nums){
            while(!v.empty() && v.back()>n){
                v.pop_back();
            }
            if(n==0){
                continue;
            }
            if(v.empty() || v.back()<n){
                ans++;
                v.push_back(n);
            }
        }
        return ans;
        
    }
};