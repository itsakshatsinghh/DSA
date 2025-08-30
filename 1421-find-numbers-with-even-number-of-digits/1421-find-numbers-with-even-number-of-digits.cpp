class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int n=nums.size();
        int total=0;//total elements with even digits

        for(int i=0;i<n;i++){
            int dig=0;//number of digits
            int temp=abs(nums[i]);
            if(temp==0){
                dig= 1;
            }
            while(temp>0){
              temp=temp/10;
              dig++;
            }
        if(dig%2==0){
            total++;
        }
        }
        return total;
    
    }
};