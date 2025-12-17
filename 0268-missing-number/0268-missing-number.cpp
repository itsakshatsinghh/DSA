class Solution {
public:
    int Sum(vector<int>& nums){
        int sum=0;
        for(long long i : nums){
            sum=sum+i;
        }
        return sum;
    }
    int missingNumber(vector<int>& nums) {
        long long sum=Sum(nums);
        long long n =nums.size();
        long long actsum= (n*(n+1))/2;
        return actsum-sum;
        
    }
};