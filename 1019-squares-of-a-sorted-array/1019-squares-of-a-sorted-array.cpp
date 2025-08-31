class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        vector <int> result(n);
        int l=0, r=n-1  , pos=n-1;
        while(l<=r){
            int ls=nums[l]*nums[l];
            int rs=nums[r]*nums[r];
            if(ls>rs){
                result[pos]=ls;
                l++;
            }
            else{
                result[pos]=rs;
                r--;
            }
            pos--;
        }
        return result;
        
    }
};