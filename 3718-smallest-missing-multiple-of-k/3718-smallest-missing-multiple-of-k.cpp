class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int m = k; ;m+=k){
            bool f = false;
            for(int n:nums){
                if(n == m){
                    f = true;
                    break;
                }
            }
            if(!f){
                return m;
            }
        }
        return -1;
        
    }
};