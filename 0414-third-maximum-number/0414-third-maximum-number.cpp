class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long n = nums.size();
        long long fm=LONG_MIN , sm=LONG_MIN, tm=LONG_MIN; 
        sort(nums.begin(), nums.end());
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return nums[1];
        }
        //our case;
        for(long long i : nums){
            if(i>fm){
                tm=sm;
                sm=fm;
                fm=i;
            }else if(i<fm && i>sm){
                tm=fm;
                sm=i;
            }else if(i<sm && i> tm){
                tm=i;
            }
        }
                     //simple check
                     return tm!=LONG_MIN ? tm:fm;
        
    }
};