class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long n=nums.size();
        long long max=0;
        long long min=n-1;
        long long  sum=0;
        for(int &num : nums){
            num=abs(num);
        }
        sort(nums.begin(), nums.end(), greater<int>());
        while(max<=min){
           if(min==max){
            sum+=nums[max]*nums[max];
            break;
         }
         sum+=nums[max]*nums[max];
         sum-=nums[min]*nums[min];
         max++;
         min--;;
        }
        return sum;
        
    }
};