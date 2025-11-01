class Solution {
public:
    int addDigits(int n) {
        int sum=0;
        while(n){
            int r=n%10;
            sum+=r;
            n=n/10;
        }
        if(sum<10){
            return sum;
        }
        else{
            return (addDigits(sum));
        }
        
    }
};