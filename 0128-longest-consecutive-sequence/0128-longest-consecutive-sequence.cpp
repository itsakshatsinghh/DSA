class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        set<int> ans(nums.begin(), nums.end());
        //now all the unique values in a sorted order is stored with us
        //now returning the values from a a set to a result vector with consecutive value
        //{logic of consv values -> diff == 1 {next-prev}}
        int last= -1e9 ;
        int len=0;
        int curr=0;
        vector<int> result;
        for(int val:ans){
            if(val==last+1){
                curr++;

            }else{
                curr=1;
            }
            len=max(curr, len);
            last=val;
        }
        return len;


        
    }
};