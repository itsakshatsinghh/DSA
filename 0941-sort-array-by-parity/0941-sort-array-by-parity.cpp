class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int write=0;
        for(int read=0;read<n;read++)
        {
            if(nums[read]%2==0){
                result[write]=nums[read];
                write++;
            }
        } 
        for (int read = 0; read < n; read++) {
            if (nums[read] % 2 == 1) {
                result[write] = nums[read];
                write++;
            }
        }
        return result;
    }
};