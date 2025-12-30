class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //init left , maxlen , zcount with 0 
        int left=0 , maxlen =0 , zcount=0;
        //run a loop 
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zcount++;
            }while(zcount>k){
                if(nums[left]==0){
                    zcount--;
                }
                left++;
            }
            maxlen=max(maxlen, i-left+1);
        }
        return maxlen;
        
    }
};