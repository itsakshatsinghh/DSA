class Solution {
public:
    bool judgeSquareSum(int c) {
        long long s=0;
        long long e=sqrt(c);
        while(s<=e){
            long long mid= s+(e-s)/2;
            // long long sq=mid*mid;
            long long n=s*s+e*e;
            if(n==c){
                return true;
            }
            else if(n>c){
                e=e-1;
            }
            else{
            s=s+1;
            }
            


        }
        return false;
        
        
    }
};