class Solution {
public:
    void duplicateZeros(vector<int>& nums) {
        int z=0;
        int n=nums.size();
        for(int nums: nums){
            if(nums==0){
                z++;
            }
        }
        for(int i=n-1, j=n+z-1;i>=0 && j>=i;i--){
            if (nums[i] == 0) {
            if (j < n) nums[j] = 0;
            j--;
            if (j < n) nums[j] = 0;
        } else {
            if (j < n) nums[j] = nums[i];
        }
        j--;
            
        }
        
    }
};