class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0 , c1=0 , c2=0;
        //counting the numbers
        for(int i = 0 ; i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }else if(nums[i]==1){
                c1++;
            }else{
                c2++;
            }

            //overriding
            //c0
            int index=0;
            for(int i=0;i<c0;i++){
                nums[index++]=0;
            }
            for(int i=0;i<c1;i++){
                nums[index++]=1;
            }
            for(int i=0;i<c2;i++){
                nums[index++]=2;
            }
        }
        // return nums;

        
    }
};