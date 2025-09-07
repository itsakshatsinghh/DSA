class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // int n=nums.size();
        // int suffix=1;
        // vector <int> ans(n,1);

        // /*suffix calc*/
        // for(int i=1;i<n;i++){
        //     ans[i]=ans[i-1]*nums[i-1];
        // }
        // /*prefix calc*/
        // for(int i=n-2;i>=0;i--){
        //     suffix=suffix*nums[i+1];
        //     ans[i]=ans[i]*suffix;

        // }
        // return ans;
        int n=nums.size();
        vector<int> result(n,0);
        int count0=0;
        long productno0=1;
        int zindex=-1;
        //checking zeros;
        for(long long i=0;i<n;i++){
            if(nums[i]==0){
                count0=count0+1;
                zindex=i;
            }else{
                productno0*=nums[i];
            }
        }
        //no zero;
        if(count0>1){
            return result;
        }else if(count0==1){
            result[zindex]=productno0;
            return result;

        }
        else{
            for(long long i=0;i<n;i++){
            result[i]=productno0/nums[i];
            }
        }
        return result;




        
    }
};