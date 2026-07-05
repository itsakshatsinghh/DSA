class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int l = 0 , n = nums.size();
        unordered_map<int , int> b;
        int maxl = 0 ;
        for(int r = 0  ; r<n ; r++){
            //freq mapping 
            b[nums[r]]++;
            while(b.size()>2){
                //freq deletion
                b[nums[l]]--;
                if(b[nums[l]]==0){
                    b.erase(nums[l]);
                }
                l++;
            }
            maxl = max(maxl , r-l+1);
        }
        return maxl;
    }
};