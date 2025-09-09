class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int no0=0;
        int n=nums.size();
        for(int i=0;i<n;i++){//shifting
            if(nums[i]!=0){
                nums[no0]=nums[i];
                no0++;
            }
        }
        for(int i=no0;i<n;i++){
            nums[i]=0;
        }
        
    }
};