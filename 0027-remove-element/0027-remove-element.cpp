class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int write=0;
        for(int ptr=0;ptr<n;ptr++){
            if(nums[ptr]!=val){
                nums[write]=nums[ptr];
                write++;
            }
        }
        return write;
        
    }
};