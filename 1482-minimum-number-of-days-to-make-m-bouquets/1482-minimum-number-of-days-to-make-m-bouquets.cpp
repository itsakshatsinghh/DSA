class Solution {
public:
// constructing the helper function 
    bool isPoss(vector<int>& nums , int day , int m , int k){
        int n = nums.size() , count = 0 , boqs = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]<=day){
                //flower has bloomed 
                count++; 
                if(count==k){
                    boqs++;
                    count = 0; // if we made the boqs then the number of flower will be equal to 0 
                }
            }else{
                count = 0;
                }
            
        } 
        //return that the boqs we wanted are made or not 
        return boqs>=m;

    }
    int minDays(vector<int>& nums, int m, int k) {
        if((long long)m*k>nums.size()){
            return -1;
        }
        int high = *max_element(nums.begin(), nums.end());
        int low =*min_element(nums.begin(), nums.end());
        int res = -1; 
        while(low<=high ){
            int mid = low + ( high - low ) /2 ; 
            if(isPoss(nums , mid , m , k)){
                res = mid;
                high = mid - 1;
            }else{
                low = mid +1 ;
            }
        }
        return res;
    }
};