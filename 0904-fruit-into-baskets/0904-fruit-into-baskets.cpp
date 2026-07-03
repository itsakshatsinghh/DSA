class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int s = 0 ,  mxml= 0 ;
        unordered_map<int , int> b;

        for(int e = 0 ; e<nums.size() ; e++){
            b[nums[e]]++;
            while(b.size()>2){
                b[nums[s]]--;
                if(b[nums[s]]==0){
                    b.erase(nums[s]);
                }
                s++;
            }
            mxml = max(mxml , e-s+1);
        }

        return mxml;
    }
};