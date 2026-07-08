class Solution {
public:
    int subarraysWithKDistinct(vector<int>& numsu, int k) {
        return atMost(numsu,k) - atMost(numsu , k-1);
    }
    int atMost(vector<int>& nums , int k){
        unordered_map<int , int> freq;
        int l = 0 , ans = 0 ;
        for(int r = 0 ; r<nums.size() ; r++){
            if(freq[nums[r]]==0){
                k--;
            }
            freq[nums[r]]++;
            while(k<0){
                freq[nums[l]]--;
                if(freq[nums[l]]==0){
                    k++;
                }
                l++;
            }
            ans = ans + r-l+1;
        }
        return ans;
    }
};