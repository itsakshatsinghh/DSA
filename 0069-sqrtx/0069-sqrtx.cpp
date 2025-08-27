class Solution {
public:
    int mySqrt(int x) {
        long long s=1;
        long long e=x;
        
        if(x==1){
            return x;
        }
        if (x < 1) {
            e = 1.0;
        }
        while(e>=s){
            long long mid=s+(e-s)/2;
            long long sq= mid*mid;
            if (sq == x) {
                return mid; 
            }
            if(sq>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return e;
        
    }
};