class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int minD=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if (nums[i] == nums[j] && nums[j] == nums[k]){
                        int res=abs(i - j) + abs(j - k) + abs(k - i);
                        minD=min(minD ,res);
                    }

                }
            }
        }
        if(minD==INT_MAX){
            return -1;
        }else{
            return minD;
        }
    }
};