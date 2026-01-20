class Solution {
public:
    int mySqrt(int x) {
        long long s=0;
        long long e=x;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long sq=mid*mid;
            if(sq==x){
                return mid;
            }
            else if(sq>x){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return e;
    }
};