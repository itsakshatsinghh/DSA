class Solution {
public:
    int search(vector<int>& nums, int t) {
        //binary search
        int s=0 , e=nums.size()-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(t==nums[m]){
                return m;
            }else if(t>nums[m]){
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return -1;
        
    }
};