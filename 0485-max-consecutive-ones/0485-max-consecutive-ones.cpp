class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int current=0;
        int max1=0;
        for(int i=0;i<n;i++){
            
            if(nums[i]==1){
                current++;
                max1=max(max1, current);
            }
            else{
                current=0;
            }
        }
        return max1;
        
    }
};