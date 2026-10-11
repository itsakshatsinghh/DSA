class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        // int cs=nums[0]*nums[0];
        int cs=0;
        
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                cs=cs+(nums[i]*nums[i]);
            }
        }
        return cs;
        
    }
};