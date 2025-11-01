class Solution {
    int sumpair(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum = sum+(r*r);
            n=n/10;
        }
        return sum;
        
}

public:
    bool isHappy(int n) {
        int slow=n;
        int fast=sumpair(n);
        while(fast!=1 && slow!=fast){
          slow=sumpair(slow);
          fast=sumpair(sumpair(fast));
        }
        return (fast==1);
        
    }
};