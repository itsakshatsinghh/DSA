class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        //if nums.size() < k then just return -1 given that k = odd number and n =1 
        int n = nums.size() ; 
        if(k %2 != 0 && n ==1 ){
            return -1;
        }// condn 1 

        //rest cases , find max of first k -1 elements 
        int maxi = INT_MIN;
        for(int i = 0 ; i<min(k-1 , n) ; i++){
            maxi = max(maxi , nums[i]);
        }
        //rest case operaration 
        if(k<n){
            maxi = max(maxi , nums[k]);
        }
        
        return maxi;
    }
};