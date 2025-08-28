class Solution {
public:
    bool isPerfectSquare(int num) {
        long long s = 0 , e=num ;
        while(s<=e){
            long long mid=s+(e-s)/2;
            long long sq=mid*mid;
            if(sq==num){
               return true;
            }
            else if(sq<num){
                s=mid+1;
            
            }
            else{
                e=mid-1;
            }
        }
        return false;
        
    }
};