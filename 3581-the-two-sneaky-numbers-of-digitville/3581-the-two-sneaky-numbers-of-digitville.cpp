class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> freq(n,0);
        vector<int> dupn;
        for(int i=0;i<n;i++){
            int num=nums[i];
            freq[num]++;
            if(freq[num]==2){
                dupn.push_back(num);
            }
        }
        return dupn;
    }
};