class Solution {
public:

    int minOperations(vector<int>& nums) {
        int maxV=0 ;
        //find the maxval
        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]>maxV){
                maxV = nums[i];
            }
        }
        //using precomputations primes till maxval + 100 ( just to buffer it up )
        int lim = maxV + 100;
        vector<bool> primech(lim + 1, true);
        primech[0]= false; 
        primech[1]= false; 
        //marking the non primes false in one loop 
        for(int r = 2 ; r*r<= lim ; r++){
            if(primech[r] == true){
                for(int q = r*r; q<=lim ; q+= r){
                    primech[q]= false;
                }
            }
        }
        //now check them as it is 
        int totalOps = 0; 
        for(int i = 0 ; i<nums.size();i++){
            int currval= nums[i];

            if(i%2==0){
                //even indexes thus it should be a prime number 
                int nextPr= currval;
                if(nextPr<=2){
                    nextPr = 2; //as its the smallest prime
                }else{
                    while(!primech[nextPr]){
                        nextPr++;
                    }
                }
                totalOps = totalOps + ( nextPr - currval);
            }else{
                int nextNpr = currval;
                if(nextNpr>1){
                    while(primech[nextNpr]){
                        nextNpr++;
                    }
                }
                totalOps = totalOps + (nextNpr - currval);
            }
        }
        return totalOps;
    }
};