class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long suml=mass;
        for(int num: nums){
            if(suml<num){
                return false;
            }
            suml=suml+num;
        }
        return true;
        
    }
};