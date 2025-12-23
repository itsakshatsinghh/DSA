class Solution {
public:
    bool checker(vector<int>& nums , int sum , int num){
        int n =num ; 
        int s=sum;
        vector<vector<bool>> t(n + 1, vector<bool>(sum + 1));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0){//sum is always equal to 0 then its always true
                    t[i][j]= true;
                }else if(i==0){
                    t[i][j]= false;
                }else if(nums[i-1]<=j){
                    t[i][j]=t[i-1][j-nums[i-1]] || t[i-1][j];
                }else{
                    t[i][j]=t[i-1][j];
                }
                
            }
        }


        return t[n][s];
    }
   



    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum = 0;
        
        for(int i=0;i<nums.size(); i++){
            sum=sum+nums[i];
        }
        if(sum%2!=0){
            return false;
        }
        return checker(nums, sum/2 , n);
        
    }
};